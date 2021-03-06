/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class <GKTurnBasedMatchesViewControllerDelegate>, <UIStateRestoring>, GKGame, GKMatchRequest, GKTurnBasedMatchesDataSource, NSString, UIPopoverController;

@interface GKTurnBasedMatchesViewController : GKCollectionViewController <UIPopoverControllerDelegate, UIStateRestoring, UIViewControllerRestoration, UICollectionViewDelegate, GKTurnBasedInviteViewControllerDelegate, GKTurnBasedMatchDetailViewControllerDelegate> {
    <GKTurnBasedMatchesViewControllerDelegate> *_delegateWeak;
    UIPopoverController *_detailPopover;
    GKGame *_game;
    NSString *_matchIDWaitingForTurnEvent;
    GKMatchRequest *_matchRequest;
    GKTurnBasedMatchesDataSource *_matchesDataSource;
    int _maxMatchesSeen;
    BOOL _showExistingMatches;
}

@property <GKTurnBasedMatchesViewControllerDelegate> * delegate;
@property(retain) UIPopoverController * detailPopover;
@property(retain) GKGame * game;
@property(readonly) BOOL isInGame;
@property(retain) NSString * matchIDWaitingForTurnEvent;
@property(retain) GKMatchRequest * matchRequest;
@property(retain) GKTurnBasedMatchesDataSource * matchesDataSource;
@property int maxMatchesSeen;
@property(readonly) Class objectRestorationClass;
@property(readonly) <UIStateRestoring> * restorationParent;
@property BOOL showExistingMatches;

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

- (void)acceptInviteForMatch:(id)arg1;
- (void)addPressed;
- (void)applicationDidEnterBackground;
- (void)cancelButtonPressed;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)configureDataSource;
- (void)configureViewFactories;
- (void)dataSource:(id)arg1 didRefreshItemsAtIndexPaths:(id)arg2;
- (void)dataSource:(id)arg1 didRemoveItemsAtIndexPaths:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)detailPopover;
- (void)detailPressedForMatch:(id)arg1;
- (void)didEnterNoContentState;
- (void)dismissDetailViewControllerAnimated:(BOOL)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)game;
- (void)handleTurnBasedEvent:(id)arg1;
- (id)init;
- (id)initWithMatchRequest:(id)arg1;
- (BOOL)isInGame;
- (void)launchGameAndShowMatchID:(id)arg1;
- (void)loadDataWithCompletionHandlerAndError:(id)arg1;
- (id)matchIDWaitingForTurnEvent;
- (id)matchRequest;
- (id)matchesDataSource;
- (int)maxMatchesSeen;
- (void)notifyGameWithMatch:(id)arg1 orError:(id)arg2;
- (void)popoverController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 inView:(inout id*)arg3;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)refreshMaster;
- (void)setDelegate:(id)arg1;
- (void)setDetailPopover:(id)arg1;
- (void)setGame:(id)arg1;
- (void)setMatchIDWaitingForTurnEvent:(id)arg1;
- (void)setMatchRequest:(id)arg1;
- (void)setMatchesDataSource:(id)arg1;
- (void)setMaxMatchesSeen:(int)arg1;
- (void)setShowExistingMatches:(BOOL)arg1;
- (void)showDetailForMatch:(id)arg1;
- (BOOL)showExistingMatches;
- (void)showInviteControllerAnimated:(BOOL)arg1;
- (void)showMatchID:(id)arg1;
- (void)turnBasedInviteViewController:(id)arg1 didCreateMatchID:(id)arg2;
- (void)turnBasedInviteViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)turnBasedInviteViewControllerWasCancelled:(id)arg1;
- (void)turnBasedMatchDetailViewControllerDidAcceptInvitation:(id)arg1;
- (void)turnBasedMatchDetailViewControllerDidChooseMatch:(id)arg1;
- (void)turnBasedMatchDetailViewControllerDidDeclineInvitation:(id)arg1;
- (void)turnBasedMatchDetailViewControllerDidQuitMatch:(id)arg1;
- (void)turnBasedMatchDetailViewControllerDidRemoveMatch:(id)arg1;
- (void)turnBasedMatchDetailViewControllerDidShowStore:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
