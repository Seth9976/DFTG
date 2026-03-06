// 函数名称: sub_437610
// 虚拟地址: 0x437610
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_437610(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_59d9eb
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_c4c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* var_c1c = arg1
    void* var_c1c_1 = arg1
    uint32_t var_c18[0x22][0x4]
    _memset(&var_c18, 0, 0xbe0)
    struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_c50)(char** arg1) = sub_437150
    `eh vector constructor iterator'(&var_c18, 0x2f8, 4, sub_437960)
    int32_t* edx = arg2
    int32_t var_14_1 = 0
    int96_t var_38 = (zx.o(0)).12
    int32_t i_1 = 0
    int32_t ecx = edx[2]
    var_38:4.d = edx[3]
    var_38.d = ecx
    var_38:8.d = edx[4]
    
    if (ecx s> 0)
        int32_t ecx_1 = 0
        void var_9f4
        void* edi_1 = &var_9f4
        int32_t var_c1c_2 = 0
        void* var_c20_1 = &var_9f4
        int32_t i
        
        do
            char** esi_2 = *edx + ecx_1
            *(edi_1 + 0x20) = esi_2[0x71]
            sub_48a5e0(edi_1, esi_2[0x6c])
            sub_48a5e0(edi_1 + 0x14, esi_2[2])
            sub_48a5e0(edi_1 + 0x18, esi_2[6])
            sub_48a5e0(edi_1 - 4, esi_2[0x6a])
            *(edi_1 + 0x24) = esi_2[0x72]
            *(edi_1 + 0x28) = esi_2[0x73]
            *(edi_1 + 0x2c) = esi_2[0x74]
            *(edi_1 + 0x3c) = esi_2[0x78]
            *(edi_1 + 0x30) = *(esi_2 + 0x1d4)
            *(edi_1 + 0x38) = esi_2[0x77]
            *(edi_1 + 0x40) = esi_2[0x79]
            __builtin_memcpy(edi_1 + 0x44, &esi_2[0x7a], 0x90)
            void* ecx_7 = var_c20_1 - 0x1fc
            int32_t j_1 = 2
            void* edx_2 = &esi_2[0xe]
            void* var_c2c_1 = ecx_7
            void* var_c28_1 = edx_2
            int32_t j
            
            do
                void* edi_3 = edx_2
                int32_t k_1 = 5
                void* esi_4 = ecx_7
                *(ecx_7 + 0xd0) = *(edx_2 + 0x94)
                *(ecx_7 + 0xe0) = *(edx_2 + 0xa4)
                *(ecx_7 + 0xe8) = *(edx_2 + 0xac)
                int32_t k
                
                do
                    *(esi_4 + 8) = *edi_3
                    *esi_4 = *(edi_3 - 8)
                    *(esi_4 + 0xc) = *(edi_3 + 4)
                    *(esi_4 + 8) = *edi_3
                    _strncpy(esi_4 - 0x10, *(edi_3 - 0x10), 0x10)
                    *(esi_4 - 1) = 0
                    edi_3 += 0x20
                    esi_4 += 0x2c
                    *(esi_4 - 0x28) = *(edi_3 - 0x24)
                    k = k_1
                    k_1 -= 1
                while (k != 1)
                edx_2 = var_c28_1 + 0xc0
                ecx_7 = var_c2c_1 + 0x108
                var_c28_1 = edx_2
                j = j_1
                j_1 -= 1
                var_c2c_1 = ecx_7
            while (j != 1)
            sub_48a5e0(var_c20_1 - 0x220, esi_2[4])
            *(var_c20_1 - 0x21c) = esi_2[8]
            sub_48a5e0(var_c20_1 - 0x224, *esi_2)
            edx = arg2
            *(var_c20_1 + 0x1c) = esi_2[0x70]
            ecx_1 = var_c1c_2 + 0x278
            *(var_c20_1 + 8) = esi_2[0x6f]
            edi_1 = var_c20_1 + 0x2f8
            i = i_1 + 1
            var_c1c_2 = ecx_1
            i_1 = i
            var_c20_1 = edi_1
        while (i s< edx[2])
    
    struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_c50_7)(char** arg1) = sub_437150
    (arg1, &var_c18, 0x2f8, 4, sub_4379b0)
    *(arg1 + 0xbe0) = var_38.d
    *(arg1 + 0xbe4) = var_38:4.d
    *(arg1 + 0xbe8) = var_38:8.d
    int32_t var_14_2 = 1
    `eh vector vbase constructor iterator'(&var_c18, 0x2f8, 4, sub_437150)
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return arg1
}
