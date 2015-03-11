/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@class NSArray, NSObject<WebPDFViewPlaceholderDelegate>, NSString, WebDataSource;

@interface WebPDFViewPlaceholder : WAKView <WebPDFDocumentView, WebPDFDocumentRepresentation> {
    struct CGSize { 
        float width; 
        float height; 
    } _containerSize;
    WebDataSource *_dataSource;
    NSObject<WebPDFViewPlaceholderDelegate> *_delegate;
    BOOL _didCompleteLayout;
    BOOL _didFinishLoadAndMemoryMap;
    struct CGPDFDocument { } *_document;
    NSArray *_pageRects;
    NSArray *_pageYOrigins;
    NSString *_title;
}

@property struct CGSize { float x1; float x2; } containerSize;
@property(copy,readonly) NSString * debugDescription;
@property NSObject<WebPDFViewPlaceholderDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) BOOL didCompleteLayout;
@property(readonly) struct CGPDFDocument { }* doc;
@property(readonly) struct CGPDFDocument { }* document;
@property(readonly) unsigned int hash;
@property(retain) NSArray * pageRects;
@property(retain) NSArray * pageYOrigins;
@property(readonly) Class superclass;
@property(retain) NSString * title;
@property(readonly) unsigned int totalPages;

+ (Class)_representationClassForWebFrame:(id)arg1;
+ (void)setAsPDFDocRepAndView;
+ (id)supportedMIMETypes;

- (id).cxx_construct;
- (struct CGSize { float x1; float x2; })_computePageRects:(struct CGPDFDocument { }*)arg1;
- (void)_doPostLoadOrUnlockTasks;
- (void)_evaluateJSForDocument:(struct CGPDFDocument { }*)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_getPDFPageBounds:(struct CGPDFPage { }*)arg1;
- (void)_notifyDidCompleteLayout;
- (void)_updateTitleForDocumentIfAvailable;
- (void)_updateTitleForURL:(id)arg1;
- (BOOL)canProvideDocumentSource;
- (void)clearDocument;
- (struct CGSize { float x1; float x2; })containerSize;
- (void)dataSourceMemoryMapFailed;
- (void)dataSourceMemoryMapped;
- (void)dataSourceUpdated:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (BOOL)didCompleteLayout;
- (void)didUnlockDocument;
- (struct CGPDFDocument { }*)doc;
- (struct CGPDFDocument { }*)document;
- (id)documentSource;
- (void)finishedLoadingWithDataSource:(id)arg1;
- (void)layout;
- (id)pageRects;
- (id)pageYOrigins;
- (void)receivedData:(id)arg1 withDataSource:(id)arg2;
- (void)receivedError:(id)arg1 withDataSource:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForPageNumber:(unsigned int)arg1;
- (void)setContainerSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDocument:(struct CGPDFDocument { }*)arg1;
- (void)setPageRects:(id)arg1;
- (void)setPageYOrigins:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)simulateClickOnLinkToURL:(id)arg1;
- (id)title;
- (unsigned int)totalPages;
- (void)viewDidMoveToHostWindow;
- (void)viewWillMoveToHostWindow:(id)arg1;

@end