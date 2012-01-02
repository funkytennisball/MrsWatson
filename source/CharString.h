//
//  CharString.h
//  MrsWatson
//
//  Created by Nik Reiman on 1/2/12.
//  Copyright (c) 2012 Teragon Audio. All rights reserved.
//

#ifndef MrsWatson_CharString_h
#define MrsWatson_CharString_h

#define STRING_LENGTH 128
#define STRING_LENGTH_SHORT 32
#define STRING_LENGTH_LONG 8192

typedef char* CharString;

CharString newCharString();
CharString newCharStringShort();
CharString newCharStringLong();

#endif
