/**
 * benCoding.Dictionary Project
 * Copyright (c) 2009-2012 by Ben Bahrenburg. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */
#import "TiProxy.h"

@interface BencodingDictionaryReferenceLibraryProxy : TiProxy {
@private 
    bool hasMinOSVersion;
}

-(NSNumber*)wordHasDefinition:(id)args;
-(NSNumber*)isSupported:(id)args;

@end