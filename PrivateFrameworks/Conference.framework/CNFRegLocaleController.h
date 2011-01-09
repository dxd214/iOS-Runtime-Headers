/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

@class PSSpecifier, NSString, NSArray;



@interface CNFRegLocaleController : CNFRegFirstRunController <CNFRegRegionChooserDelegate>
{
    NSString *_currentRegionID;
    NSString *_currentPhoneValue;
    PSSpecifier *_countryFieldSpecifier;
    NSArray *_phoneNumberSpecifiers;
    PSSpecifier *_phoneNumberGroupSpecifier;
    PSSpecifier *_phoneNumberFieldSpecifier;
    NSArray *_regionData;
    BOOL _isLoading;
    BOOL _isError;
    id _regionListChangeObserver;
}

@property(retain) NSArray *regionData;
@property(copy) NSString *currentPhoneValue;
@property(copy) NSString *currentRegionID;


- (id)controllerForRowAtIndexPath:(id)arg1;
- (id)countryList;
- (void)_loadInitialValues;
- (void)_startListeningForRegionListChanges;
- (void)_stopListeningForRegionListChanges;
- (void)_handleRegionListLoad;
- (id)_currentRegion;
- (id)currentCountryValueForSpecifier:(id)arg1;
- (void)_refreshCountryFieldAnimated:(BOOL)arg1;
- (void)_showPhoneField:(BOOL)arg1 animated:(BOOL)arg2;
- (id)_phoneTextField;
- (id)currentPhoneCompatibleCountryCode;
- (id)_unformattedPhoneNumber:(id)arg1;
- (id)currentPhoneNumberForSpecifier:(id)arg1;
- (void)setCurrentPhoneNumber:(id)arg1 forSpecifier:(id)arg2;
- (void)_refreshPhoneFieldAnimated:(BOOL)arg1;
- (void)_showCountryPickerAnimated:(BOOL)arg1;
- (void)_hideCountryPickerAnimated:(BOOL)arg1;
- (void)showCountryPicker;
- (void)hideCountryPicker;
- (void)regionChooser:(id)arg1 selectedRegionID:(id)arg2;
- (void)_buildCountryFieldSpecifierCache:(id)arg1;
- (void)_buildPhoneNumberSpecifierCache:(id)arg1;
- (id)regionData;
- (void)setRegionData:(id)arg1;
- (id)currentPhoneValue;
- (void)setCurrentPhoneValue:(id)arg1;
- (id)currentRegionID;
- (void)setCurrentRegionID:(id)arg1;
- (void)_rightButtonTapped;
- (id)validationString;
- (void)_startTimeout;
- (void)_handleTimeout;
- (id)specifiers;
- (void)_finishValidation;
- (void)_failValidationWithError:(id)arg1;
- (void)_updateControllerState;
- (void)_setFieldsEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_buildSpecifierCache:(id)arg1;
- (void)_setupEventHandlers;
- (id)logName;
- (id)bundle;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (id)init;
- (void)dealloc;
- (void)_updateUI;

@end