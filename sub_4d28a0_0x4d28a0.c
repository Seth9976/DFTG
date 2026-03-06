// 函数名称: sub_4d28a0
// 虚拟地址: 0x4d28a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_4d28a0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a0018
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* eax_3 = data_114e848
    
    if (*eax_3 == 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    EnterCriticalSection(&eax_3[4])
    void* edi = data_114e848
    int32_t result = 0
    int32_t result_1 = 0
    
    for (int32_t i = 0; i s< 0x50; i += 8)
        int32_t eax_6 = *(i + edi + 0x24)
        
        if (eax_6 == 2)
            int32_t* ecx_3 = *(i + edi + 0x28)
            
            if (ecx_3[1] != 3)
                sub_489550(eax_6, &data_5b2591, "assetPtr->assetType == ASSET_TYPE_TEXTURE", 
                    "d:\ax\trunk\ax2017\engine\texture.h", 0x86, "TextureGetDef")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            int32_t* var_1c
            int32_t* var_38_1 = &var_1c
            **(sub_4981f0(ecx_3) + 0x18) = 1
            int32_t* eax_9 = *(i + edi + 0x28)
            int32_t* var_14
            sub_4889e0(&var_14, eax_9, 3)
            int32_t var_8_1 = 0
            int32_t* ebx = var_1c
            void* ecx_5 = *ebx
            
            if (ecx_5 != 0)
                int32_t* ecx_6 = *(ecx_5 + 0x28)
                
                if (ecx_6 != 0)
                    sub_4d2a30(ecx_6)
                else if (ebx[2] == 0)
                    ebx[2] = sub_4d25b0(eax_9)
            
            int32_t var_8_2 = 0xffffffff
            int32_t* eax_11 = var_14
            
            if (eax_11 != 0)
                eax_11[7] -= 1
                var_14 = nullptr
            
            sub_4d2800(*(i + edi + 0x28))
            result = result_1
            *(i + edi + 0x24) = 0
            *(i + edi + 0x28) = 0
            edi = data_114e848
        else if (eax_6 == 3)
            *(i + edi + 0x24) = 0
            *(i + edi + 0x28) = 0
        else if (eax_6 == 1)
            result += 1
            result_1 = result
    
    LeaveCriticalSection(edi + 4)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
