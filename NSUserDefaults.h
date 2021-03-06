/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSUserDefaults : NSObject  {
    id _private;
    void *_reserved[4];
}

+ (void)resetStandardUserDefaults;
+ (void)setStandardUserDefaults:(id)arg1;
+ (id)standardUserDefaults;
+ (id)_web_preferredLanguageCode;
+ (void)_web_defaultsDidChange;
+ (void)_web_addDefaultsChangeObserver;
+ (void)_ensureAndLockPreferredLanguageLock;
+ (void)_IMSetObject:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3;
+ (id)_IMAgentObjectForKey:(id)arg1;
+ (id)_IMObjectForKey:(id)arg1 inDomain:(id)arg2;
+ (id)_IMAppObjectForKey:(id)arg1;
+ (id)_webkit_preferredLanguageCode;

- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (void)setFloat:(float)arg1 forKey:(id)arg2;
- (void)setInteger:(int)arg1 forKey:(id)arg2;
- (void)registerDefaults:(id)arg1;
- (void)addSuiteNamed:(id)arg1;
- (float)floatForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)init;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (BOOL)synchronize;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (oneway void)release;
- (id)persistentDomainForName:(id)arg1;
- (BOOL)objectIsForcedForKey:(id)arg1 inDomain:(id)arg2;
- (BOOL)objectIsForcedForKey:(id)arg1;
- (void)removePersistentDomainForName:(id)arg1;
- (id)persistentDomainNames;
- (void)removeVolatileDomainForName:(id)arg1;
- (void)setVolatileDomain:(id)arg1 forName:(id)arg2;
- (id)volatileDomainForName:(id)arg1;
- (id)volatileDomainNames;
- (void)removeSuiteNamed:(id)arg1;
- (void)setSearchList:(id)arg1;
- (id)searchList;
- (void)setURL:(id)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setLong:(long long)arg1 forKey:(id)arg2;
- (id)URLForKey:(id)arg1;
- (double)doubleForKey:(id)arg1;
- (long long)longForKey:(id)arg1;
- (int)integerForKey:(id)arg1;
- (id)stringArrayForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1 inDomain:(id)arg2;
- (id)objectForKey:(id)arg1 inDomain:(id)arg2;
- (void)setPersistentDomain:(id)arg1 forName:(id)arg2;
- (id)initWithUser:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3;
- (id)dictionaryRepresentation;
- (BOOL)boolForKey:(id)arg1;
- (BOOL)delayedSynchronize;

@end
