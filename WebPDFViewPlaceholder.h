/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class NSArray, NSString, NSObject<WebPDFViewPlaceholderDelegate>, WebDataSource;

@interface WebPDFViewPlaceholder : WAKView <WebPDFDocumentView, WebPDFDocumentRepresentation> {
    NSString *_title;
    NSArray *_pageRects;
    NSArray *_pageYOrigins;
    struct CGPDFDocument { } *_document;
    WebDataSource *_dataSource;
    NSObject<WebPDFViewPlaceholderDelegate> *_delegate;
    BOOL _didFinishLoadAndMemoryMap;
}

@property NSObject<WebPDFViewPlaceholderDelegate> * delegate;
@property(retain) NSArray * pageRects;
@property(retain) NSArray * pageYOrigins;
@property(readonly) struct CGPDFDocument { }* document;
@property(readonly) struct CGPDFDocument { }* doc;
@property(readonly) unsigned int totalPages;
@property(retain) NSString * title;

+ (Class)_representationClassForWebFrame:(id)arg1;
+ (id)supportedMIMETypes;
+ (void)setAsPDFDocRepAndView;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_getPDFPageBounds:(struct CGPDFPage { }*)arg1;
- (void)_doPostLoadOrUnlockTasks;
- (void)_evaluateJSForDocument:(struct CGPDFDocument { }*)arg1;
- (void)_updateTitleForDocumentIfAvailable;
- (struct CGSize { float x1; float x2; })_computePageRects:(struct CGPDFDocument { }*)arg1;
- (void)_notifyDidCompleteLayout;
- (void)_updateTitleForURL:(id)arg1;
- (void)setDocument:(struct CGPDFDocument { }*)arg1;
- (void)setPageYOrigins:(id)arg1;
- (void)setPageRects:(id)arg1;
- (struct CGPDFDocument { }*)document;
- (id)pageRects;
- (id)documentSource;
- (BOOL)canProvideDocumentSource;
- (void)viewDidMoveToHostWindow;
- (void)viewWillMoveToHostWindow:(id)arg1;
- (void)layout;
- (void)setDataSource:(id)arg1;
- (void)receivedError:(id)arg1 withDataSource:(id)arg2;
- (void)dataSourceUpdated:(id)arg1;
- (void)receivedData:(id)arg1 withDataSource:(id)arg2;
- (void)finishedLoadingWithDataSource:(id)arg1;
- (void)dataSourceMemoryMapFailed;
- (void)dataSourceMemoryMapped;
- (void)dealloc;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)simulateClickOnLinkToURL:(id)arg1;
- (id)pageYOrigins;
- (void)didUnlockDocument;
- (struct CGPDFDocument { }*)doc;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForPageNumber:(unsigned int)arg1;
- (unsigned int)totalPages;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end
