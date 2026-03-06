// 函数名称: sub_4d1f40
// 虚拟地址: 0x4d1f40
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_4d1f40(char* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_59ff88
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t var_54 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_28
    int32_t* var_58 = &var_28
    int32_t* result_1
    int32_t** eax_4 = sub_4889e0(&result_1, arg1, 3)
    int32_t var_14_1 = 0
    int32_t* edi = *var_28
    
    if (edi[0xa] != 0)
        sub_489550(eax_4, &data_5b2591, "pDefTexture->pTextureImportData->atlasTexture == NULL", 
            "d:\ax\trunk\ax2017\engine\texture.cpp", 0xc9, "TextureGetImageData")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    if (edi[0xf] != 1)
        sub_489550(eax_4, &data_5b2591, "pTextureData->imageCount == 1", 
            "d:\ax\trunk\ax2017\engine\texture.cpp", 0xcb, "TextureGetImageData")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t* eax_5 = edi[0x12]
    arg2[1] = *edi
    arg2[2] = edi[1]
    arg2[4] = 1
    int32_t eax_9 = sub_5233d0(1) * *edi
    int32_t var_58_1 = arg2[4]
    int32_t edx = arg2[2]
    int32_t ecx_2 = arg2[1]
    arg2[3] = eax_9
    int32_t eax_10 = sub_5235a0(eax_9, edx, ecx_2, var_58_1)
    int32_t eax_12 = var_28[4]
    
    if (eax_12 != 0)
        *arg2 = eax_12
    else
        uint32_t (* eax_13)[0x4] = sub_4c2e40(eax_10)
        *arg2 = eax_13
        
        if (edi[5] != 8)
            int32_t* eax_16 = sub_4c2e40(*eax_5)
            int32_t* ecx_9 = sub_4d0f30(eax_16, eax_16, arg1, nullptr, *eax_5, eax_5[2])
            int32_t eax_17 = arg2[4]
            int32_t var_38_1 = eax_17
            int128_t var_48 = *arg2
            int32_t var_58_4 = *eax_5
            
            if (sub_524b30(eax_17, &var_48, ecx_9, eax_16) == 0)
                char* const ecx_10 = &data_5b2591
                char* eax_20 = *(arg1 + 0x20)
                
                if (eax_20 != 0)
                    ecx_10 = eax_20
                
                char* const var_58_5 = ecx_10
                sub_4892e0("Failed to read texture %s")
            
            if (eax_16 != 0)
                _aligned_free_base(eax_16)
            
            var_28[4] = *arg2
        else
            void* ecx_4 = *eax_5
            
            if (eax_10 != ecx_4)
                sub_489550(eax_5, &data_5b2591, "imageSize == pImage->imageSize", 
                    "d:\ax\trunk\ax2017\engine\texture.cpp", 0xda, "TextureGetImageData")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            sub_4d0f30(eax_5, eax_13, arg1, nullptr, ecx_4, eax_5[2])
            var_28[4] = *arg2
    
    int32_t* result = result_1
    
    if (result != 0)
        result[7] -= 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
