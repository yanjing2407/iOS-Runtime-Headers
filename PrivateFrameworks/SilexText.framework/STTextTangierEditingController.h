/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SilexText.framework/SilexText
 */

@interface STTextTangierEditingController : TSWPEditingController {
    bool  _startingInitialSelectionDrag;
}

@property (nonatomic) bool startingInitialSelectionDrag;

- (bool)canAddOrShowComment;
- (bool)canHandleGesture:(id)arg1;
- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
- (id)editingReps;
- (id)editorKeyboardLanguage;
- (id)extraMenuItems;
- (bool)handleGesture:(id)arg1;
- (bool)isParagraphModeWithSelection:(id)arg1 onStorage:(id)arg2;
- (unsigned int)knobTrackingTapCount;
- (void)lookup:(id)arg1;
- (void)lookupAction:(id)arg1;
- (void)setStartingInitialSelectionDrag:(bool)arg1;
- (bool)startingInitialSelectionDrag;
- (void)tappedOnKnob:(id)arg1;
- (bool)wantsCaret;
- (bool)wantsKeyboard;

@end
