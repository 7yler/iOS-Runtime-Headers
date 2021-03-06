/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNInstantMessageAddress : NSObject <CNObjectValidation, NSCopying, NSSecureCoding> {
    NSString *_service;
    NSString *_username;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *service;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *username;

+ (id)instantMessageAddressWithUsername:(id)arg1 service:(id)arg2;
+ (id)localizedStringForKey:(id)arg1;
+ (id)localizedStringForService:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUsername:(id)arg1 service:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isValid:(id*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)service;
- (void)setService:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)username;

@end
