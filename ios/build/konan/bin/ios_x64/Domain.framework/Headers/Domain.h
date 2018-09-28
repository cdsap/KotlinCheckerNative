#import <Foundation/Foundation.h>

@class DomainPlace, DomainFunctions, DomainStdlibUnit, DomainPlaceLocation, DomainPlaceId;

@protocol DomainGetPlace;

NS_ASSUME_NONNULL_BEGIN

@interface KotlinBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface KotlinBase (KotlinBaseCopying) <NSCopying>
@end;

__attribute__((objc_runtime_name("KotlinMutableSet")))
@interface DomainMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((objc_runtime_name("KotlinMutableDictionary")))
@interface DomainMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

@protocol DomainGetPlace
@required
- (DomainPlace *)getPlaxce __attribute__((swift_name("getPlaxce()")));
@end;

__attribute__((objc_subclassing_restricted))
@interface DomainFunctions : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)executeFunc:(DomainStdlibUnit *(^)(void))func __attribute__((swift_name("execute(func:)")));
- (void)aux __attribute__((swift_name("aux()")));
@end;

__attribute__((objc_subclassing_restricted))
@interface DomainPlace : KotlinBase
- (instancetype)initWithId:(int32_t)id type:(int32_t)type subtype:(int32_t)subtype searchType:(int32_t)searchType name:(NSString *)name propertiesNumber:(int32_t)propertiesNumber location:(DomainPlaceLocation *)location area:(DomainPlaceId * _Nullable)area city:(DomainPlaceId * _Nullable)city state:(DomainPlaceId * _Nullable)state country:(DomainPlaceId * _Nullable)country __attribute__((swift_name("init(id:type:subtype:searchType:name:propertiesNumber:location:area:city:state:country:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (int32_t)component6 __attribute__((swift_name("component6()")));
- (DomainPlaceLocation *)component7 __attribute__((swift_name("component7()")));
- (DomainPlaceId * _Nullable)component8 __attribute__((swift_name("component8()")));
- (DomainPlaceId * _Nullable)component9 __attribute__((swift_name("component9()")));
- (DomainPlaceId * _Nullable)component10 __attribute__((swift_name("component10()")));
- (DomainPlaceId * _Nullable)component11 __attribute__((swift_name("component11()")));
- (DomainPlace *)doCopyId:(int32_t)id type:(int32_t)type subtype:(int32_t)subtype searchType:(int32_t)searchType name:(NSString *)name propertiesNumber:(int32_t)propertiesNumber location:(DomainPlaceLocation *)location area:(DomainPlaceId * _Nullable)area city:(DomainPlaceId * _Nullable)city state:(DomainPlaceId * _Nullable)state country:(DomainPlaceId * _Nullable)country __attribute__((swift_name("doCopy(id:type:subtype:searchType:name:propertiesNumber:location:area:city:state:country:)")));
@property (readonly) int32_t id;
@property (readonly) int32_t type;
@property (readonly) int32_t subtype;
@property (readonly) int32_t searchType;
@property (readonly) NSString *name;
@property (readonly) int32_t propertiesNumber;
@property (readonly) DomainPlaceLocation *location;
@property (readonly) DomainPlaceId * _Nullable area;
@property (readonly) DomainPlaceId * _Nullable city;
@property (readonly) DomainPlaceId * _Nullable state;
@property (readonly) DomainPlaceId * _Nullable country;
@end;

__attribute__((objc_subclassing_restricted))
@interface DomainPlaceId : KotlinBase
- (instancetype)initWithId:(int32_t)id name:(NSString *)name __attribute__((swift_name("init(id:name:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (DomainPlaceId *)doCopyId:(int32_t)id name:(NSString *)name __attribute__((swift_name("doCopy(id:name:)")));
@property (readonly) int32_t id;
@property (readonly) NSString *name;
@end;

__attribute__((objc_subclassing_restricted))
@interface DomainPlaceLocation : KotlinBase
- (instancetype)initWithLatitude:(double)latitude longitude:(double)longitude __attribute__((swift_name("init(latitude:longitude:)"))) __attribute__((objc_designated_initializer));
- (double)component1 __attribute__((swift_name("component1()")));
- (double)component2 __attribute__((swift_name("component2()")));
- (DomainPlaceLocation *)doCopyLatitude:(double)latitude longitude:(double)longitude __attribute__((swift_name("doCopy(latitude:longitude:)")));
@property (readonly) double latitude;
@property (readonly) double longitude;
@end;

__attribute__((objc_subclassing_restricted))
@interface DomainStdlibUnit : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@end;

NS_ASSUME_NONNULL_END
