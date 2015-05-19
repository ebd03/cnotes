//
//  Header.h
//  DCUEXAM
//
//  Created by Eoghan Byrne on 18/05/2015.
//  Copyright (c) 2015 EUE. All rights reserved.
//

#ifndef DCUEXAM_Header_h
#define DCUEXAM_Header_h

struct equipment{
    char equipcode[20];
    char equipname[20];
    int equipprice;
};
typedef struct equipment EQUIP;

struct pet{
    char petcategory[20];
    char breed[20];
    int age;
    int petprice;
    EQUIP petsequip;
    int totalprice;
};
typedef struct pet PET;

#endif
