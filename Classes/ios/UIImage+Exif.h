//
//  UIImage+Exif.h
//  Pods
//
//  Created by Nikita Tuk on 12/02/15.
//
//

#import <TargetConditionals.h>
#if TARGET_OS_IPHONE || TARGET_OS_MACCATALYST
#import <UIKit/UIKit.h>

@class ExifContainer;

@interface UIImage (Exif)

- (NSData *)addExif:(ExifContainer *)container;

@end
#endif
