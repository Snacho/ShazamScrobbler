//
//  Shazam.h
//  SBShazamScrobbler
//
//  Created by Stéphane Bruckert on 09/10/14.
//  Copyright (c) 2014 Stéphane Bruckert. All rights reserved.
//

#ifndef SBShazamScrobbler_Shazam_h
#define SBShazamScrobbler_Shazam_h

@interface ShazamController : NSObject

+ (void)doShazam;
+ (void)monitorShazam:(NSString*)path;

@end

#endif
