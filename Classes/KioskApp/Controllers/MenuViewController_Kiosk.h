//
//  MenuViewController_Kiosk.h
//  FastPdfKit Sample
//
//  Created by Gianluca Orsini on 28/02/11.
//  Copyright 2010 MobFarm S.r.l. All rights reserved.
//

#import "MenuViewController_Kiosk.h"
#import "ReaderViewController.h"

@class MFDocumentManager;


@interface MenuViewController_Kiosk : UIViewController <UIWebViewDelegate>{

	UIView * downloadProgressContainerView;
	
	UIProgressView * downloadProgressView;
	
	NSMutableArray * homeListPdfs;
	NSMutableDictionary * buttonRemoveDict;
	NSMutableDictionary * openButtons;
	NSMutableDictionary * progressViewDict;
	NSMutableDictionary * imgDict;
	
	NSMutableArray *documentsList;
	
	BOOL graphicsMode;
    
    //elearn
    IBOutlet UIWebView *myWevView;
    IBOutlet UITextField *accoutName;   
    IBOutlet UITextField *accoutPassword;  
    UIAlertView *myAlertView;
    
}

//elearn

@property (nonatomic,retain) UIWebView *myWevView;
@property (nonatomic,retain) UIAlertView *myAlertView;

-(IBAction) Login:(id)sender;
-(IBAction)start:(id)sender;


//elearn end

-(IBAction)actionOpenPlainDocument:(NSString *)documentName;
//-(void)showViewDownload;
//-(void)hideViewDownload;

//@property (nonatomic, retain) MFDocumentManager *document;
@property (nonatomic, retain) NSMutableArray *documentsList;
//@property (nonatomic,retain ) UIProgressView *downloadProgressView;
//@property (nonatomic,retain ) UIView *downloadProgressContainerView;

//@property (nonatomic, assign) UIAlertView *passwordAlertView;
//@property (nonatomic, assign) NSString *documentName;
@property (nonatomic,retain ) NSDictionary *buttonRemoveDict;
@property (nonatomic,retain ) NSDictionary *openButtons;
@property (nonatomic,retain ) NSDictionary *progressViewDict;
@property (nonatomic,retain ) NSDictionary *imgDict;
@property (nonatomic,assign ) BOOL graphicsMode;

@end
