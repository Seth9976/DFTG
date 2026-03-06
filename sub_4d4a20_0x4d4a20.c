// 函数名称: sub_4d4a20
// 虚拟地址: 0x4d4a20
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char** __fastcallsub_4d4a20(char** arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a02c0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg1[2] != 0)
        sub_489550(&ExceptionList, &data_5b2591, "pParseItem->pSubTree == NULL", 
            "d:\ax\trunk\ax2017\engine\defparsetree.cpp", 0x43, "DefParseItemFree")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    char*** ebx = data_114e86c
    int32_t* i_1 = ebx[1]
    int32_t i_2 = ebx[2] * 0x14
    int32_t i_3 = i_2
    
    if (i_1 != 0)
        int32_t* i
        
        do
            i = *i_1
            void* edx_1 = &i_1[1]
            i_2 = i_1
            i_1 = i
            
            if (arg1 u>= edx_1)
                i_2 += i_3 + 4
                
                if (arg1 u< i_2)
                    int32_t eax_8
                    int32_t edx_2
                    edx_2:eax_8 = sx.q(arg1 - edx_1)
                    i_2 = divs.dp.d(edx_2:eax_8, 0x14)
                    
                    if (mods.dp.d(edx_2:eax_8, 0x14) == 0)
                        ebx[3] -= 1
                        int32_t var_8_1 = 0
                        
                        if (data_aca1f4 != 0)
                            char* eax_9 = arg1[1]
                            
                            if (eax_9 != 0 && *eax_9 != 0)
                                char* eax_10 = sub_48a080(&arg1[1])
                                int32_t temp2_1 = *(eax_10 + 4)
                                *(eax_10 + 4) -= 1
                                
                                if (temp2_1 == 1)
                                    sub_4984f0(eax_10, *(eax_10 + 0xc) + 0x10)
                                    arg1[1] = &data_5b2591
                        
                        int32_t var_8_2 = 1
                        
                        if (data_aca1f4 != 0)
                            char* eax_11 = *arg1
                            
                            if (eax_11 != 0 && *eax_11 != 0)
                                char* eax_12 = sub_48a080(arg1)
                                int32_t temp3_1 = *(eax_12 + 4)
                                *(eax_12 + 4) -= 1
                                
                                if (temp3_1 == 1)
                                    sub_4984f0(eax_12, *(eax_12 + 0xc) + 0x10)
                                    *arg1 = &data_5b2591
                        
                        char** result = *ebx
                        *arg1 = result
                        *ebx = arg1
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return result
        while (i != 0)
    
    sub_489550(i_2, &data_5b2591, "IsPointerFromAllocator(pItem)", 
        "d:\ax\trunk\ax2017\engine\xalloc.h", 0x10c, "XTypedAllocator<struct DefParseItem>::Free")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
