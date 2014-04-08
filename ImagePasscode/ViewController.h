//
//  ViewController.h
//  ImagePasscode
//
//  Created by Clement Leung on 2014-04-07.
//
//

#import <UIKit/UIKit.h>
#import <MobileCoreServices/MobileCoreServices.h>

@interface ViewController : UIViewController
<UIImagePickerControllerDelegate,
UINavigationControllerDelegate>

@property BOOL newMedia;
@property (strong, nonatomic) IBOutlet UIImageView *imageView;
//- (IBAction)useCamera:(id)sender;
- (IBAction)useCameraRoll:(id)sender;
@end
