// 函数名称: sub_4a8b70
// 虚拟地址: 0x4a8b70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4a8b70(void* arg1, void* arg2)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_59f4d3
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_a4 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_a8)(struct _EXCEPTION_REGISTRATION_RECORD**
        * arg1) = sub_48a3d0
    int32_t var_68[0x11]
    int32_t var_a8_1 = `eh vector constructor iterator'(&var_68, 4, 0x10, sub_48a310)
    int32_t var_14_1 = 0
    int32_t eax_3 = sub_49af10(arg2, &var_68)
    
    if (*(arg1 + 0x1110) == 0)
        *(arg1 + 0x1108) = sub_498490(0x3800)
        *(arg1 + 0x110c) = 0
        *(arg1 + 0x1110) = 0x200
    
    int32_t eax_20 = 0
    int32_t var_6c = 0
    
    if (eax_3 s> 0)
        do
            char* eax_5 = var_68[eax_20]
            char* const edi_1 = &data_5b2591
            int32_t* esi_2 = data_114e808
            int32_t var_90_1 = 0
            
            if (eax_5 != 0)
                edi_1 = eax_5
            
            int32_t var_8c_1 = 0xffffffff
            int128_t var_88_1 = zx.o(0)
            var_88_1.d = 0
            int32_t* var_90_2
            
            if (esi_2 == 0)
            label_4a8c6f:
                int32_t* eax_9 = operator new(0x1c)
                int32_t* var_94_1 = eax_9
                char* const esi_3 = &data_5b2591
                char* ecx_4 = var_68[var_6c]
                *eax_9 = &data_5f3ed0
                
                if (ecx_4 != 0)
                    esi_3 = ecx_4
                
                eax_9[6] = &data_5b2591
                var_14_1.b = 2
                sub_48a5e0(&eax_9[6], esi_3)
                int32_t eax_10 = data_114e80c
                eax_9[1] = eax_10
                data_114e80c = eax_10 + 1
                eax_9[3] = data_114e808
                data_114e808 = eax_9
                int32_t eax_13 = sub_4e1990(esi_3, 0)
                eax_9[4] = eax_13
                int32_t eax_14 = eax_13 & 0x8000001f
                
                if (eax_14 s< 0)
                    eax_14 = ((eax_14 - 1) | 0xffffffe0) + 1
                
                int32_t edx_1 = 1 << eax_14.b
                
                if (edx_1 == 0)
                    sub_489550(eax_14, &data_5b2591, "result != 0", 
                        "d:\ax\trunk\ax2017\engine\ui2.cpp", 0xcd5, "CrcToBloom")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                var_14_1.b = 0
                eax_9[5] = edx_1
                var_90_2 = eax_9
            else
                while (true)
                    if ((*(*esi_2 + 4))(edi_1) != 0)
                        var_90_2 = esi_2
                        break
                    
                    esi_2 = esi_2[3]
                    
                    if (esi_2 == 0)
                        goto label_4a8c6f
            
            var_88_1:0xc.d = 0x3f800000
            int32_t eax_17 = *(arg1 + 0x110c)
            
            if (eax_17 s>= *(arg1 + 0x1110))
                sub_489550(eax_17, &data_5b2591, "mSize < mSizeReserved", 
                    "d:\ax\trunk\ax2017\engine\xarray.h", 0x96, "XArray<struct UI2State>::Append")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            int32_t ecx_9 = eax_17 * 7
            int32_t eax_18 = *(arg1 + 0x1108)
            *(eax_18 + (ecx_9 << 2)) = var_90_2.o
            *(eax_18 + (ecx_9 << 2) + 0x10) = var_88_1:8.q
            *(eax_18 + (ecx_9 << 2) + 0x18) = 0
            *(arg1 + 0x110c) += 1
            eax_20 = var_6c + 1
            var_6c = eax_20
        while (eax_20 s< eax_3)
    
    int32_t var_14_2 = 0xffffffff
    int32_t result = `eh vector vbase constructor iterator'(&var_68, 4, 0x10, sub_48a3d0)
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
