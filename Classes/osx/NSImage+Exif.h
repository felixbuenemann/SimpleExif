//
//  UIImage+Exif.h
//  Pods
//
//  Created by Nikita Tuk on 12/02/15.
//
//

#import <TargetConditionals.h>
#if TARGET_OS_OSX
#import <Cocoa/Cocoa.h>

@class ExifContainer;

@interface NSImage (Exif)

+ (NSData *)getAppendedDataForImageData:(NSData *)imageData exif:(ExifContainer *)container;

@end
#endif
