from nameToId import *
import os
import png
import shutil


DEBUG = 0
CONV_RAW_TO_PNG = 1

in_dir = "./Assets/"
out_dir = "./Previews/"

for f in os.listdir(in_dir):
	name, extension = os.path.splitext(f)
	if extension.lower() != ".png" and extension.lower() != ".raw":
		print("skipping non-image: ", f)
		continue
	if DEBUG: print(f)

	# GAME_UNIT - imgID - W - # - H - #
	parts = name.split('-')
	unit_k = parts[0]
	img_k = parts[1]
	width = parts[3]
	height = parts[5]
	if DEBUG: print("\t" + unit_k, img_k, width, height)
	# try to split GAME and UNIT names
	# this might be wrong -- fails on "UMK3_SNES_ShaoKahn" ?
	# smells like hardcoded tables
	game = unit_k[0:(unit_k.find('_'))]

	# look up the 'section' for the game. used as a struct name key
	# as well as output folder, and must match palmod expectation
	section = Game_Sections[game]
	if section == None:
		print("unknown game: ", game, " for file ", f)
		continue
	
	if DEBUG: print("\t" + game, section)

	# try to look up the id for this unit
	section_units = globals().get(section+"_unitIDs")
	if section_units == None:
		print("could not resolve unit map:", section+"_unitIDs")
		continue

	unit_id = section_units[unit_k]
	if unit_id == None:
		print("no unit '",unit_k,"' defined in ", section_units)
		continue

	# try to look up the imgid for this img for this unit
	game_imgids = globals().get(game + "_CharSpec_imgIDs")
	section_imgids = globals().get(section + "_CharSpec_imgIDs")
	game_basic_imgids = globals().get(game + "_imgIDs")
	section_basic_imgids = globals().get(section + "_imgIDs")
	img_id = None
	if game_imgids and game_imgids[unit_k] and game_imgids[unit_k][img_k]:
		img_id = game_imgids[unit_k][img_k]
	elif section_imgids and section_imgids[unit_k] and section_imgids[unit_k][img_k]:
		img_id = section_imgids[unit_k][img_k]
	elif game_basic_imgids and game_basic_imgids[unit_k] and game_basic_imgids[unit_k][img_k]:
		img_id = game_basic_imgids[unit_k][img_k]
	elif section_basic_imgids and section_basic_imgids[unit_k] and section_basic_imgids[unit_k][img_k]:
		img_id = section_basic_imgids[unit_k][img_k]

	if img_id == None:
		print("failed to match imgid for file ", f,"(parsed img key '",img_k,"')")

	# GAME-unit-0xUU-imgid-0xII-W-#-H-#-compF-#
	newName = game+'-unit-'+unit_id+'-imgid-'+img_id+'-W-'+width+'-H-'+height+'-compF-9'
	print(newName)

	# still without final extension
	out_path = out_dir + section + "/"
	# make previews/section directory if it doesn't exist
	if not os.path.exists(out_path):
		os.makedirs(out_path)
	out_path += newName
	if DEBUG: print(out_path)

	# optionally convert raws to indexed png for better filesize
	if CONV_RAW_TO_PNG and extension.lower() == ".raw":
		palette = [(0,0,0,0)] + [(i,i,i,0xff) for i in range(1,256)]
		out_file = open(out_path + '.png', 'wb')
		w = png.Writer(int(width),int(height), bitdepth=8, palette=palette)
		raw_file = open(in_dir + f, 'rb')
		w.write_array(out_file, raw_file.read())
		raw_file.close()
		out_file.close()
	else:
		shutil.copyfile(in_dir + f, out_path + extension)