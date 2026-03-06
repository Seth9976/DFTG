// 函数名称: sub_4de5c0
// 虚拟地址: 0x4de5c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD**sub_4de5c0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a06f4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_74 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* esi = data_114e818
    
    if (esi == 0)
        sub_489550(result, &data_5b2591, "gpGameData", "d:\ax\trunk\ax2017\engine\game.h", 0x45, 
            "GetGameData")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    if (not(*(esi + 0x30) f<= 0))
        if (data_15166b8 s> *(*fsbase->ThreadLocalStoragePointer + 4))
            __Init_thread_header(&data_15166b8)
            
            if (data_15166b8 == 0xffffffff)
                int32_t var_8_1 = 0
                data_15166bc = sub_4d0b50("sys/DebugFont.font", 0x12)
                __Init_thread_footer(&data_15166b8)
        
        char* var_14 = &data_5b2591
        int32_t var_8_2 = 1
        float xmm0_1 = *(esi + 0x30)
        int32_t ecx_2 = *(data_aca1f0 + 0x14)
        float xmm0_2
        
        if (0f <= xmm0_1)
            xmm0_2 = xmm0_1 + 0.5f
        else
            xmm0_2 = xmm0_1 - 0.5f
        
        int32_t eax_7 = int.d(xmm0_2)
        
        if (ecx_2 s> 1)
            int32_t var_78_3 = ecx_2
            int32_t var_7c_1 = eax_7
            var_8_2.b = 4
            char* var_1c
            sub_48a560(&var_14, sub_48a9d0(&var_1c, "%d stall %d"))
            var_8_2.b = 5
            
            if (data_aca1f4 != 0)
                char* eax_12 = var_1c
                
                if (eax_12 != 0 && *eax_12 != 0)
                    char* eax_13 = sub_48a080(&var_1c)
                    int32_t temp0_1 = *(eax_13 + 4)
                    *(eax_13 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_4984f0(eax_13, *(eax_13 + 0xc) + 0x10)
                        var_1c = &data_5b2591
        else
            int32_t var_78_1 = eax_7
            var_8_2.b = 2
            char* const var_18
            sub_48a560(&var_14, sub_48a9d0(&var_18, &data_5efc90))
            var_8_2.b = 3
            
            if (data_aca1f4 != 0)
                char* eax_9 = var_18
                
                if (eax_9 != 0 && *eax_9 != 0)
                    char* eax_10 = sub_48a080(&var_18)
                    int32_t temp1_1 = *(eax_10 + 4)
                    *(eax_10 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        sub_4984f0(eax_10, *(eax_10 + 0xc) + 0x10)
                        var_18 = &data_5b2591
        
        var_8_2.b = 1
        char* edi_1 = var_14
        char* ebx_1 = &data_5b2591
        int32_t var_40 = 0x3f800000
        int32_t var_34_1 = 0
        
        if (edi_1 != 0)
            ebx_1 = edi_1
        
        int32_t var_28_1 = 0
        int32_t var_3c_1 = 0
        int32_t var_30_1 = 0x3f800000
        int32_t var_24_1 = 0
        int32_t var_38_1 = 0x40400000
        int32_t var_2c_1 = 0
        int32_t var_20_1 = 0x3f800000
        void var_64
        void* var_7c_2 = &var_64
        result = sub_4e8fc0(sub_41da40(&var_40, &data_5d3570, &var_64, &var_40), &var_64, ebx_1, 
            data_15166bc, 0xffffffff, 0xffffffff, 0, 1)
        int32_t var_8_3 = 6
        
        if (data_aca1f4 != 0 && edi_1 != 0 && *edi_1 != 0)
            result = sub_48a080(&var_14)
            int32_t temp2_1 = result[1]
            result[1] -= 1
            
            if (temp2_1 == 1)
                result = sub_4984f0(result, &result[3][2])
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
