// 函数名称: sub_438a30
// 虚拟地址: 0x438a30
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_438a30(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_59dbcb
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_1c4 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_f4 = arg2
    char* result = *(arg1 + 0xf8) - 0x64
    
    if (result u<= 0xd)
        result.b = 0
    else
        if (arg2 == 0x7fffffff)
            sub_489550(result, &data_5b2591, "gameId != GAMEIDX_UNSAVED", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x2dc, "LocalGameSave")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        sub_4892e0("==save game==")
        int32_t var_1c8_2 = arg2
        int32_t var_1cc_1 = *(sub_437f10(*(data_6d00d8 + 0xbe4)) + 0x240)
        int32_t var_1d0_1 = sub_489c60()
        char* result_1
        sub_48a9d0(&result_1, "%sgamelocal_%d_%d.xml")
        int32_t var_14_1 = 0
        void var_1b8
        _memset(&var_1b8, 0, 0xa0)
        int32_t i_1 = *(arg1 + 0xec)
        int32_t var_fc_1 = *(arg1 + 0x108)
        int32_t i_2 = i_1
        int128_t var_114_1 = *(arg1 + 0xf0)
        int64_t var_104_1 = *(arg1 + 0x100)
        
        if (i_1 s> 0)
            void var_1b0
            void* ecx_2 = &var_1b0
            void* edx = arg1 + 0x28
            int32_t i
            
            do
                *(ecx_2 - 8) = edx - 0x18
                edx += 0x2c
                ecx_2 += 0x20
                *(ecx_2 - 0x20) = *(edx - 0x34)
                *(ecx_2 - 0x18) = *(edx - 0x2c)
                *(ecx_2 - 0x14) = *(edx - 0x28)
                *(ecx_2 - 0x1c) = *(edx - 0x30)
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        int32_t* edx_1 = data_126b94c
        void var_e8
        __builtin_memcpy(&var_e8, &var_1b8, 0xc0)
        int32_t* eax_12 = sub_4d78e0(&var_e8, edx_1)
        char* result_3 = result_1
        char* const result_6 = &data_5b2591
        char var_e9_1 = 1
        char* result_5 = &data_5b2591
        
        if (result_3 != 0)
            result_5 = result_3
        
        if (sub_4d7b70(eax_12, data_126b94c, eax_12, result_5) == 0)
            char* result_2 = result_1
            
            if (result_2 != 0)
                result_6 = result_2
            
            char* const result_7 = result_6
            sub_4892e0("Failed to write file: '%s'")
            var_e9_1 = 0
        
        sub_4d4bb0(eax_12)
        
        if (var_e9_1 != 0)
            result = TPI1::QueryTiForCVRecord(arg1)
            char var_e9_2 = result.b
            int32_t var_14_3 = 2
            
            if (data_aca1f4 != 0)
                char* result_4 = result_1
                
                if (result_4 != 0 && *result_4 != 0)
                    result = sub_48a080(&result_1)
                    int32_t temp1_1 = *(result + 4)
                    *(result + 4) -= 1
                    
                    if (temp1_1 == 1)
                        sub_4984f0(result, *(result + 0xc) + 0x10)
                    
                    result.b = var_e9_2
        else
            int32_t var_14_2 = 1
            
            if (data_aca1f4 != 0)
                result = result_1
                
                if (result != 0 && *result != 0)
                    result = sub_48a080(&result_1)
                    int32_t temp2_1 = *(result + 4)
                    *(result + 4) -= 1
                    
                    if (temp2_1 == 1)
                        sub_4984f0(result, *(result + 0xc) + 0x10)
            
            result.b = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
