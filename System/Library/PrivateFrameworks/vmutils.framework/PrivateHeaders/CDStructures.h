//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Function Pointers

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct DISK_SYMBOL_HEADER_BLOCK {
    char dshb_id[32];
    short dshb_page_size;
    unsigned long dshb_hash_page;
    unsigned int dshb_root_mte;
    unsigned long dshb_mod_date;
    struct DISK_TABLE_INFO dshb_frte;
    struct DISK_TABLE_INFO dshb_rte;
    struct DISK_TABLE_INFO dshb_mte;
    struct DISK_TABLE_INFO dshb_cmte;
    struct DISK_TABLE_INFO dshb_cvte;
    struct DISK_TABLE_INFO dshb_csnte;
    struct DISK_TABLE_INFO dshb_clte;
    struct DISK_TABLE_INFO dshb_ctte;
    struct DISK_TABLE_INFO dshb_tte;
    struct DISK_TABLE_INFO dshb_nte;
    struct DISK_TABLE_INFO dshb_tinfo;
    struct DISK_TABLE_INFO dshb_fite;
    struct DISK_TABLE_INFO dshb_const;
    unsigned int dshb_file_creator;
    unsigned int dshb_file_type;
};

struct DISK_TABLE_INFO {
    unsigned long dti_first_page;
    unsigned long dti_page_count;
    unsigned long dti_object_count;
};

struct DISK_TABLE_INFO_v32 {
    unsigned short _field1;
    unsigned short _field2;
    unsigned long _field3;
};

struct FILE_REFERENCE {
    unsigned int _field1;
    long _field2;
};

struct FILE_REFERENCE_v32 {
    unsigned short _field1;
    long _field2;
};

struct MODULES_TABLE_ENTRY {
    unsigned short _field1;
    long _field2;
    long _field3;
    char _field4;
    char _field5;
    unsigned int _field6;
    struct FILE_REFERENCE _field7;
    long _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
    unsigned int _field15;
};

struct RESOURCE_TABLE_ENTRY {
    unsigned int _field1;
    short _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned long _field6;
};

struct STORAGE_CLASS_ADDRESS {
    char _field1;
    char _field2;
    long _field3;
};

struct TracebackTbl {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned char _field5;
    unsigned char _field6;
    unsigned char _field7;
    unsigned char _field8;
};

struct _NSRange {
    unsigned int location;
    unsigned int length;
};

struct __sFILE {
    char *_field1;
    int _field2;
    int _field3;
    short _field4;
    short _field5;
    struct __sbuf _field6;
    int _field7;
    void *_field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
    struct __sbuf _field13;
    struct __sFILEX *_field14;
    int _field15;
    unsigned char _field16[3];
    unsigned char _field17[1];
    struct __sbuf _field18;
    int _field19;
    long long _field20;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

struct ar_hdr {
    char _field1[16];
    char _field2[12];
    char _field3[6];
    char _field4[6];
    char _field5[8];
    char _field6[10];
    char _field7[2];
};

struct backtraceMagicNumbers {
    struct _NSRange sigTrampRange;
    unsigned int signal_pc_offset;
    unsigned int signal_sp_offset;
};

struct dyld_all_image_infos {
    unsigned int version;
    unsigned int infoArrayCount;
    struct dyld_image_info *infoArray;
    CDUnknownFunctionPointerType notification;
    _Bool processDetachedFromSharedRegion;
};

struct dyld_image_info;

struct load_command {
    unsigned int _field1;
    unsigned int _field2;
};

struct mach_header {
    unsigned int _field1;
    int _field2;
    int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
};

struct mach_header_64 {
    unsigned int _field1;
    int _field2;
    int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
};

struct pagebuff {
    union {
        char _field1[1];
        union CONTAINED_VARIABLES_TABLE_ENTRY _field2[1];
        union FILE_REFERENCE_TABLE_ENTRY _field3[1];
        struct MODULES_TABLE_ENTRY _field4[1];
        union CONTAINED_MODULES_TABLE_ENTRY _field5[1];
        union CONTAINED_LABELS_TABLE_ENTRY _field6[1];
        union CONTAINED_TYPES_TABLE_ENTRY _field7[1];
        union CONTAINED_STATEMENTS_TABLE_ENTRY _field8[1];
        union FRTE_INDEX_TABLE_ENTRY _field9[1];
    } _field1;
};

struct samplingStatistics {
    id _field1;
    unsigned int _field2;
    unsigned int _field3;
    double _field4;
};

struct section {
    char _field1[16];
    char _field2[16];
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
};

struct section_64 {
    char _field1[16];
    char _field2[16];
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
};

struct segment_command {
    unsigned int _field1;
    unsigned int _field2;
    char _field3[16];
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    int _field8;
    int _field9;
    unsigned int _field10;
    unsigned int _field11;
};

struct segment_command_64 {
    unsigned int _field1;
    unsigned int _field2;
    char _field3[16];
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    int _field8;
    int _field9;
    unsigned int _field10;
    unsigned int _field11;
};

struct stabInfo {
    unsigned int _field1;
    id _field2;
    unsigned int _field3;
    unsigned int _field4;
};

struct stat {
    int st_dev;
    unsigned short st_mode;
    unsigned short st_nlink;
    unsigned long long st_ino;
    unsigned int st_uid;
    unsigned int st_gid;
    int st_rdev;
    struct timespec st_atimespec;
    struct timespec st_mtimespec;
    struct timespec st_ctimespec;
    struct timespec st_birthtimespec;
    long long st_size;
    long long st_blocks;
    int st_blksize;
    unsigned int st_flags;
    unsigned int st_gen;
    int st_lspare;
    long long st_qspare[2];
};

struct timespec {
    int tv_sec;
    long tv_nsec;
};

struct timeval {
    int tv_sec;
    int tv_usec;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
} CDStruct_7523a67d;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
} CDStruct_c0454aff;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int *_field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7[2];
    CDStruct_7523a67d _field8[0];
} CDStruct_32d0cbe3;

typedef struct {
    unsigned int _field1;
    struct FILE_REFERENCE _field2;
} CDStruct_073c60ba;

#pragma mark Named Unions

union CONTAINED_LABELS_TABLE_ENTRY {
    CDStruct_073c60ba _field1;
    struct {
        unsigned int _field1;
        unsigned int _field2;
        unsigned int _field3;
        short _field4;
        short _field5;
    } _field2;
    unsigned int _field3;
};

union CONTAINED_MODULES_TABLE_ENTRY {
    CDStruct_c0454aff _field1;
    unsigned int _field2;
};

union CONTAINED_STATEMENTS_TABLE_ENTRY {
    CDStruct_073c60ba _field1;
    struct {
        unsigned int _field1;
        short _field2;
        unsigned int _field3;
    } _field2;
    unsigned int _field3;
};

union CONTAINED_TYPES_TABLE_ENTRY {
    CDStruct_073c60ba _field1;
    struct {
        unsigned int _field1;
        unsigned int _field2;
        short _field3;
    } _field2;
    unsigned int _field3;
};

union CONTAINED_VARIABLES_TABLE_ENTRY {
    CDStruct_073c60ba _field1;
    struct {
        unsigned int _field1;
        unsigned int _field2;
        short _field3;
        char _field4;
        char _field5;
        union {
            struct STORAGE_CLASS_ADDRESS _field1;
            struct {
                char _field1[13];
                char _field2;
                char _field3;
            } _field2;
            struct {
                long _field1;
                char _field2;
            } _field3;
        } _field6;
    } _field2;
    unsigned int _field3;
};

union FILE_REFERENCE_TABLE_ENTRY {
    struct {
        unsigned int _field1;
        unsigned int _field2;
        long _field3;
    } _field1;
    struct {
        unsigned int _field1;
        long _field2;
    } _field2;
    unsigned int _field3;
};

union FRTE_INDEX_TABLE_ENTRY {
    CDStruct_c0454aff _field1;
    unsigned int _field2;
};

