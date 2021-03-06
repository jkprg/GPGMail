/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSPreferencesModule.h"

#import "NSTableViewDataSource-Protocol.h"

@class NSButton, NSColorWell, NSMutableArray, NSPanel, NSPopUpButton, NSTableView;

@interface ViewerPreferences : NSPreferencesModule <NSTableViewDataSource>
{
    NSButton *_highlightThreadCheckbox;
    NSColorWell *_threadHighlightColorWell;
    NSButton *_loadURLsSwitch;
    NSButton *_showPresenceSwitch;
    NSButton *_showUnreadMessagesInBoldSwitch;
    NSButton *_useSmartAddressesSwitch;
    NSPopUpButton *_headerDetailPopup;
    NSTableView *_customHeaderTable;
    NSButton *_addHeaderButton;
    NSButton *_removeHeaderButton;
    NSPanel *_customHeaderPanel;
    NSMutableArray *_filteredHeaders;
    BOOL _isEditingHeader;
    NSPopUpButton *_snippetLinesPopup;
    NSButton *_classicLayoutButton;
    NSButton *_toCcButton;
    NSButton *_contactPhotosButton;
    NSButton *_viewRelatedMessagesButton;
}

+ (void)postViewingPreferencesChanged;
+ (void)postPresencePreferenceChanged;
+ (void)postLayoutPreferenceChanged;
+ (void)_postToCcPreferenceChanged;
+ (void)postContactPhotoPreferenceChanged;
+ (void)postSnippetLinesPreferenceChanged;
- (void)awakeFromNib;
- (void)dealloc;
- (BOOL)isResizable;
- (id)titleForIdentifier:(id)arg1;
- (id)windowTitle;
- (void)_initializeHeaderDetailLevelPopup;
- (void)_updateCustomHeaderUI;
- (void)initializeFromDefaults;
- (void)loadURLsClicked:(id)arg1;
- (void)showPresenceClicked:(id)arg1;
- (void)useSmartAddressesClicked:(id)arg1;
- (void)_editCustomHeadersClicked;
- (void)_customHeaderSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_headerTableBeganEditing:(id)arg1;
- (void)_headerTableEndedEditing:(id)arg1;
- (void)_removeInvalidHeaders;
- (void)_endEditingHeader;
- (void)okClicked:(id)arg1;
- (void)cancelClicked:(id)arg1;
- (void)removeHeaderClicked:(id)arg1;
- (void)addHeaderClicked:(id)arg1;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)headerDetailLevelChanged:(id)arg1;
- (void)highlightThreadClicked:(id)arg1;
- (void)threadHighlightColorChanged:(id)arg1;
- (void)showUnreadMessagesInBoldChanged:(id)arg1;
- (void)snippetLinesChanged:(id)arg1;
- (void)classicLayoutClicked:(id)arg1;
- (void)toCcClicked:(id)arg1;
- (void)contactPhotosClicked:(id)arg1;
- (void)viewRelatedMessagesClicked:(id)arg1;

@end

