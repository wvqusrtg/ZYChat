//
//  GJGCInformationCellContentModel.h
//  GJGroupChat
//
//  Created by ZYVincent QQ:1003081775 on 14-11-6.
//  Copyright (c) 2014年 ZYV. All rights reserved.
//

#import "GJGCInformationBaseModel.h"
#import "GJGCInformationBaseCell.h"
#import "GJGCInformationGroupShowItem.h"

@interface GJGCInformationCellContentModel : GJGCInformationBaseModel


#pragma mark - 通用属性

@property (nonatomic,strong)NSAttributedString *tag;

@property (nonatomic,strong)NSAttributedString *baseContent;

@property (nonatomic,strong)NSAttributedString *level;

@property (nonatomic,strong)NSString *headUrl;

#pragma mark - 相册通用属性

@property (nonatomic,strong)NSArray *photoBoxArray;

@property (nonatomic,strong)NSAttributedString *distance;

@property (nonatomic,strong)NSAttributedString *name;

#pragma mark - 个人相册属性

@property (nonatomic,assign)NSInteger personSex;

@property (nonatomic,strong)NSAttributedString *personAge;

@property (nonatomic,strong)NSAttributedString *personStarName;

@property (nonatomic,strong)NSAttributedString *personLastActiveTime;

@property (nonatomic,strong)NSAttributedString *personHelloCount;

@property (nonatomic,assign)long long personUserId;

#pragma mark - 个人展示群组

@property (nonatomic,strong)NSArray *personShowGroupArray;

#pragma mark - 群组展示成员

@property (nonatomic,strong)NSArray *groupShowMemeberArray;

@property (nonatomic,assign)BOOL     isGroupMember;

#pragma mark - 动态内容图片

@property (nonatomic,strong)NSString *feedListImageUrl;

@property (nonatomic,strong)NSAttributedString *feedListCount;

/**
 *  icon 用来显示群主的头像
 */
@property (nonatomic,assign) BOOL isIconShowGroupOwner;
@property (nonatomic,assign) BOOL isShowOwnerIcon;

/**
 *  icon 用来显示 地图
 */
@property (nonatomic,assign) BOOL isIconShowMap;

/**
 *  是否是群账号
 */
@property (nonatomic,assign) BOOL isGroupAccount;

/**
 *  是否是 职业
 */
@property (nonatomic,assign) BOOL isJob;

/**
 *  是否是 用户自己
 */
@property (nonatomic,assign) BOOL isMySelf;

/**
 *  是否支持长按
 */
@property (nonatomic,assign) BOOL haveLongPress;

@property (nonatomic,strong) NSString *groupAttrTagStr;

@property (nonatomic,strong) NSString *labelColorType;

@property (nonatomic,strong) NSString *expandLabels;

@property (nonatomic,strong)NSString *groupHeadUrl;

@property (nonatomic,strong)NSString *groupName;

@end
