![Odamex](https://github.com/odamex/odamex/blob/development/media/logo_128.png?raw=true)

| Windows Build Status | Mac Build Status | Linux Build Status | Join our Discord! |
| -------------------- | ---------------- | ------------------ | ----------------- |
| [![Windows](https://github.com/odamex/odamex/workflows/Windows/badge.svg)](https://github.com/odamex/odamex/actions?query=workflow%3AWindows) | [![macOS](https://github.com/odamex/odamex/workflows/macOS/badge.svg)](https://github.com/odamex/odamex/actions?query=workflow%3AmacOS) | [![Linux](https://github.com/odamex/odamex/workflows/Linux/badge.svg)](https://github.com/odamex/odamex/actions?query=workflow%3ALinux) | [![Join our discord](https://discordapp.com/api/guilds/236518337671200768/widget.png?style=shield)](https://discord.gg/aMUzcZE) |

Odamex is a modification of DOOM to allow players to compete with each other over the Internet using a client/server architecture. Thanks to the source code release of DOOM by id Software in December 1997, there have been many modifications that enhanced DOOM in various ways. These modifications are known as "source ports", as early modifications mainly ported DOOM to other platforms and operating systems such as Windows and Macintosh.

Odamex is based on the CSDoom 0.62 source code originally created by Sergey Makovkin, which is based on the ZDoom 1.22 source code created by Randy Heit.

## Major features
Odamex supports the following features:
* Full Client/Server multiplayer architecture with network compensation features (unlagged, client interpolation and prediction)
* Support for up to 255 players
* Various compatibility settings, to emulate vanilla Doom, Boom, or ZDoom physics and fixes
* Playback and recording of vanilla demos
* A fully-featured client netdemo record system with playback control
* Removal of most vanilla Doom Static limits.
* Support for most Boom and MBF mapping features
* The traditional old-school style of Deathmatch and a Cooperative mode, but also other game modes such as Team Deathmatch and Capture the Flag
* Support for Survival, Last Man Standing, Last Team Standing, LMS CTF, 3-WAY CTF, and Attack & Defend game modes.
* Competitive-ready features, such as a warmup mode, round system, player queue, or playercolor overriding.
* Several modern ZDoom additions, such as slopes, LANGUAGEv2 or MAPINFOv2 lump support
* An array of editing features, including the Hexen map format, DeHackEd and BEX patch support and ACS up to ZDoom 1.23
* Native Joystick support
* Several additional music formats, such as MOD and OGG
* In-Engine WAD downloader
* Allow on-the-fly WAD loading
* A 32-bit Color depth|true color renderer
* Full Widescreen support
* Ultra high resolution support (up to 8K)
* Uncapped and raised framerate
* Takes advantage of widely used libraries to port it to new devices with ease.

## Compilation instructions

Clone the repositories, with all submodules:
```git
git clone https://github.com/odamex/odamex.git --recurse-submodules
```

if you downloaded the zip, use these commands on the git directory :
```git
git submodule init 
git submodule update
```

Odamex requires `cmake` as well as the following libraries:
* [SDL 2.0](https://www.libsdl.org/download-2.0.php)
* [SDL2-Mixer](https://libsdl.org/projects/SDL_mixer/)
* [wxWidgets](https://www.wxwidgets.org/downloads/) for the launcher
* (optional) libPNG
* (optional) cURL
* (optional) zlib

Please check [this page](https://odamex.net/wiki/How_to_build_from_source) for further informations on how to compile Odamex for your platform.

## Bug Reporting & Contributing

If you discovered an oddity, game-breaking bugs or would like to propose new features for Odamex, you can use the [GitHub's Issues](https://github.com/odamex/odamex/issues) page. 

Before submitting a pull request, please make sure it follows [our coding standards](https://odamex.net/wiki/Coding_standard)!

For historical purposes, you can also view [our bugtracker's archive](https://odamex.net/bugs/).

## Website
Please visit the following websites for more information about the development of the port and our community: 
* [**Odamex official website**](https://odamex.net)
* [Forums](https://odamex.net/boards/)
* [Twitter](https://twitter.com/odamex)


## License
Odamex is released under the GNU General Public License v2. Please read [`LICENSE`](LICENSE) for further details regarding the license.
