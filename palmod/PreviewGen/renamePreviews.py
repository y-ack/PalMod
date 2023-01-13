from nameToId import *
import os
import shutil


DEBUG = 0

in_dir = "./Assets/"
out_dir = "./Previews/"

if not os.path.exists(out_dir):
	os.makedirs(out_dir)

for f in os.listdir(in_dir):
	name, extension = os.path.splitext(f)
	if extension.lower() != ".png" and extension.lower() != ".raw":
		print("skipping non-image: ", f)
		continue

	# GAME_UNIT - imgID - W - # - H - #
	parts = name.split('-')
	game = parts[0][0:(parts[0].find('_'))]
	width = parts[3]
	height = parts[5]

	section = Game_Sections[game]
	if section == None:
		print("unknown game: ", game, " for file ", f)
		continue
	
	if DEBUG: print(game, section)

	section_units = globals().get(section+"_unitIDs")
	if section_units == None:
		print("could not resolve unit map:", section+"_unitIDs")
		continue

	unit_id = section_units[parts[0]]
	if unit_id == None:
		print("no unit ",parts[0]," defined in ", section_units)
		continue

	game_imgids = globals().get(game + "_CharSpec_imgIDs")
	section_imgids = globals().get(section + "_CharSpec_imgIDs")
	game_basic_imgids = globals().get(game + "_imgIDs")
	section_basic_imgids = globals().get(section + "_imgIDs")
	img = parts[1]
	img_id = None
	if game_imgids != None and game_imgids[parts[0]] != None and game_imgids[parts[0]][parts[1]] != None:
		img_id = game_imgids[parts[0]][parts[1]]
	elif section_imgids != None and section_imgids[parts[0]] != None and section_imgids[parts[0]][parts[1]] != None:
		img_id = section_imgids[parts[0]][parts[1]]
	elif game_basic_imgids != None and game_basic_imgids[parts[0]] != None and game_basic_imgids[parts[0]][parts[1]] != None:
		img_id = game_basic_imgids[parts[0]][parts[1]]
	elif section_basic_imgids != None and section_basic_imgids[parts[0]] != None and section_basic_imgids[parts[0]][parts[1]] != None:
		img_id = section_basic_imgids[parts[0]][parts[1]]

	if img_id == None:
		print("failed to match imgid for file ", f)

	# GAME-unit-0xUU-imgid-0xII-W-#-H-#-compF-#.ext
	newName = game+'-unit-'+unit_id+'-imgid-'+img_id+'-W-'+width+'-H-'+height+'-compF-9'+extension
	print(newName)

	shutil.copyfile(in_dir + f, out_dir + newName)