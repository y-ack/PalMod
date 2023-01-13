# PalMod (for Land Maker)
forked because the original maintainer doesn't want to expand scope outside fighting games (understandably)

previews were previously handled by 'imgdat,' a non-modular binary format with poor compression that depended on one person with private scripts.
since it'd be pointless without previews, y stripped that out. we now load .RAW or indexed .PNG previews from a "Previews/" folder in the same directory.  
`Previews/Section/Game-unit-0x00-imgid-0x00-H-0-W-0.png`

probably not maintained(?)


original readme:

---

# PalMod
Palette-editing software for classic fighting games, mostly centered around Capcom games.

PalMod is the active branch.  That's where I'm releasing binaries from.  Daily betas are published to https://zachd.com/palmod/releases .

LKG is a mirror of the 2008 version of this code.  This was version "1.22".  There are a number of variants of 1.22: some binary hacks of it, and a couple recompiles.  In all cases I have folded every positive change I know of into the active branch.  There is also a very similar version of "1.22" at DrewDos's PalMod branch on GitHub.
