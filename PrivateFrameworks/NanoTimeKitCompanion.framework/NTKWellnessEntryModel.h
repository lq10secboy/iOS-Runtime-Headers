/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKWellnessEntryModel : NTKTimelineEntryModel <CLKTimelineEntry, NSCopying> {
    HKQuantity * _activeEnergy;
    HKQuantity * _activeEnergyGoal;
    HKQuantity * _activeEnergyTotal;
    double  _briskMinutes;
    double  _briskMinutesGoal;
    double  _briskMinutesTotal;
    BOOL  _databaseLoading;
    BOOL  _deviceLocked;
    NTKWellnessEntryModel * _previousEntryModel;
    unsigned int  _standHourState;
    int  _standHoursGoal;
    int  _standHoursTotal;
}

@property (nonatomic, retain) HKQuantity *activeEnergy;
@property (nonatomic, retain) HKQuantity *activeEnergyGoal;
@property (nonatomic, retain) HKQuantity *activeEnergyTotal;
@property (nonatomic) double briskMinutes;
@property (nonatomic) double briskMinutesGoal;
@property (nonatomic) double briskMinutesTotal;
@property (nonatomic) BOOL databaseLoading;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL deviceLocked;
@property (readonly) unsigned int hash;
@property (nonatomic) NTKWellnessEntryModel *previousEntryModel;
@property (nonatomic) unsigned int standHourState;
@property (nonatomic) int standHoursGoal;
@property (nonatomic) int standHoursTotal;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BOOL userHasDoneActivitySetup;

+ (id)_activityTemplateWithFamily:(int)arg1 entryModel:(id)arg2;
+ (id)idealizedEntryModel;
+ (id)largeModular:(id)arg1;
+ (id)largeUtility:(id)arg1;
+ (id)lockedEntryModel;

- (void).cxx_destruct;
- (id)activeEnergy;
- (id)activeEnergyGoal;
- (double)activeEnergyGoalCompletionPercentage;
- (id)activeEnergyTotal;
- (int)availabilityState;
- (double)briskMinuteGoalCompletionPercentage;
- (double)briskMinutes;
- (double)briskMinutesGoal;
- (double)briskMinutesTotal;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)databaseLoading;
- (id)date;
- (id)debugDescription;
- (id)description;
- (BOOL)deviceLocked;
- (id)previousEntryModel;
- (void)setActiveEnergy:(id)arg1;
- (void)setActiveEnergyGoal:(id)arg1;
- (void)setActiveEnergyTotal:(id)arg1;
- (void)setBriskMinutes:(double)arg1;
- (void)setBriskMinutesGoal:(double)arg1;
- (void)setBriskMinutesTotal:(double)arg1;
- (void)setDatabaseLoading:(BOOL)arg1;
- (void)setDate:(id)arg1;
- (void)setPreviousEntryModel:(id)arg1;
- (void)setStandHourState:(unsigned int)arg1;
- (void)setStandHoursGoal:(int)arg1;
- (void)setStandHoursTotal:(int)arg1;
- (double)standHourGoalCompletionPercentage;
- (unsigned int)standHourState;
- (int)standHoursGoal;
- (int)standHoursTotal;
- (id)templateForComplicationFamily:(int)arg1;
- (BOOL)userHasDoneActivitySetup;

@end