// Emacs style mode select   -*- C++ -*-
//-----------------------------------------------------------------------------
//
// $Id$
//
// Copyright (C) 2006-2020 by The Odamex Team.
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// DESCRIPTION:
//	Source versioning
//
//-----------------------------------------------------------------------------


#ifndef __VERSION_H__
#define __VERSION_H__

#if defined(CLIENT_APP)
#define GAMEEXE "odamex"
#elif defined(SERVER_APP)
#define GAMEEXE "odasrv"
#else
#error "Odamex is not client or server"
#endif

// Lots of different representations for the version number
#define CONFIGVERSIONSTR "90"
#define GAMEVER (0*256+90)

#define DOTVERSIONSTR "0.9.0"

#define COPYRIGHTSTR "Copyright (C) 2006-2021 The Odamex Team"

#define SERVERMAJ (gameversion / 256)
#define SERVERMIN ((gameversion % 256) / 10)
#define SERVERREL ((gameversion % 256) % 10)
#define CLIENTMAJ (GAMEVER / 256)
#define CLIENTMIN ((GAMEVER % 256) / 10)
#define CLIENTREL ((GAMEVER % 256) % 10)

// SAVESIG is the save game signature. It should be the minimum version
// whose savegames this version is compatible with, which could be
// earlier than this version.
#define SAVESIG "ODAMEXSAVE090   "	// Needs to be exactly 16 chars long

#define NETDEMOVER 3

// denis - per-file svn version stamps
class file_version
{
public:
	file_version(const char *uid, const char *id, const char *p, int l, const char *t, const char *d);
};

#define VERSION_CONTROL(uid, id) static file_version file_version_unique_##uid(#uid, id, __FILE__, __LINE__, __TIME__, __DATE__);

const char* GitHash();
const char* GitBranch();
const char* GitRevCount();
const char* GitShortHash();
const char* NiceVersionDetails();
const char* NiceVersion();

#endif //__VERSION_H__
