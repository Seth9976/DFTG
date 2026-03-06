// 函数名称: sub_533d90
// 虚拟地址: 0x533d90
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_533d90(int32_t arg1, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a2878
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_58 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_1c = arg2
    int32_t* ecx
    int32_t* result = sub_533b50(ecx)
    int32_t* var_24
    int32_t* var_5c = &var_24
    int32_t* var_30
    sub_4889e0(&var_30, result, 3)
    int32_t var_8_1 = 0
    int32_t* esi = var_24
    int32_t* ebx = *esi
    int32_t edx_1
    
    if (ebx != 0)
        edx_1 = arg3
        int32_t eax_29 = edx_1 * 6
        
        if (ebx[0xf] != eax_29)
            sub_489550(eax_29, &data_5b2591, "pTextureData->imageCount == mips * 6", 
                "d:\ax\trunk\ax2017\engine\iblimport.cpp", 0xaf, "TextureMakeCubeMap")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        if (ebx[0x12] == 0)
            sub_489550(eax_29, &data_5b2591, "pTextureData->pImages", 
                "d:\ax\trunk\ax2017\engine\iblimport.cpp", 0xb0, "TextureMakeCubeMap")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
    else
        int32_t* eax_3 = sub_586f5f(0x50, 0x10)
        ebx = eax_3
        
        if (ebx == 0)
            sub_489550(eax_3, &data_5b2591, "pBuffer", "d:\ax\trunk\ax2017\engine\xmemory.cpp", 0x57, 
                "XMalloc")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        uint32_t (* eax_4)[0x4] = sub_4ce680(ebx, data_12baafc)
        *esi = ebx
        int32_t* ecx_3 = *arg2
        
        if (ecx_3[1] != 3)
            sub_489550(eax_4, &data_5b2591, "assetPtr->assetType == ASSET_TYPE_TEXTURE", 
                "d:\ax\trunk\ax2017\engine\texture.h", 0x86, "TextureGetDef")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t* eax_5 = sub_4981f0(ecx_3)
        *ebx = **eax_5
        ebx[1] = *(*eax_5 + 4)
        ebx[4] = arg3
        int32_t edi_2 = arg3 * 6
        ebx[0xf] = edi_2
        int32_t edi_3 = edi_2 << 4
        ebx[6] = *(*eax_5 + 0x18)
        uint32_t (* eax_8)[0x4] = sub_4c2e40(edi_3)
        _memset(eax_8, 0, edi_3)
        edx_1 = arg3
        ebx[0x12] = eax_8
        ebx[5] = 8
        ebx[7] = 1
        ebx[8] = 1
        ebx[9] = 1
    
    int32_t ecx_10 = ebx[1]
    void* eax_9 = nullptr
    int32_t esi_2 = *ebx
    int32_t var_18 = ecx_10
    var_24 = nullptr
    
    if (edx_1 s<= 0)
    label_533f6a:
        int32_t* eax_26 = var_30
        
        if (eax_26 != 0)
            eax_26[7] -= 1
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    void* edx_3 = var_1c
    
    while (true)
        int32_t var_20_1 = 0
        int32_t edi_7 = eax_9 << 4
        void* var_14_1 = edx_3
        
        while (true)
            int32_t ecx_11 = ebx[6]
            int32_t var_44_1 = esi_2
            int32_t var_38_1 = ecx_11
            int32_t eax_11 = sub_5233d0(ecx_11) * esi_2
            int32_t eax_12 = eax_11 * ecx_10
            
            if (eax_12 s<= 0)
                sub_489550(eax_12, &data_5b2591, "size > 0", "d:\ax\trunk\ax2017\engine\xmemory.cpp", 
                    0x3d, "XMalloc")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            if (eax_12 s>= 0x77359400)
                sub_489550(eax_12, &data_5b2591, "size < 2000000000", 
                    "d:\ax\trunk\ax2017\engine\xmemory.cpp", 0x3e, "XMalloc")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            void* eax_13 = sub_586f5f(eax_12, 0x10)
            
            if (eax_13 == 0)
                sub_489550(eax_13, &data_5b2591, "pBuffer", "d:\ax\trunk\ax2017\engine\xmemory.cpp", 
                    0x57, "XMalloc")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            int32_t* ecx_12 = data_114ec78
            void* var_48 = eax_13
            (*(*ecx_12 + 0x80))(*var_14_1, &var_48)
            int32_t* edx_5 = ebx[0x12]
            *(edx_5 + edi_7) = eax_11 * ecx_10
            *(edx_5 + edi_7 + 8) = var_48
            int32_t eax_18 = var_20_1 + 1
            var_14_1 += edx_1 << 2
            edi_7 += edx_1 << 4
            ecx_10 = var_18
            var_20_1 = eax_18
            
            if (eax_18 s>= 6)
                int32_t eax_20
                int32_t edx_6
                edx_6:eax_20 = sx.q(ecx_10)
                int32_t eax_23
                int32_t edx_7
                edx_7:eax_23 = sx.q(esi_2)
                ecx_10 = (eax_20 - edx_6) s>> 1
                edx_3 = &var_1c[1]
                eax_9 = var_24 + 1
                esi_2 = (eax_23 - edx_7) s>> 1
                var_18 = ecx_10
                var_24 = eax_9
                var_1c = edx_3
                
                if (eax_9 s< arg3)
                    break
                
                goto label_533f6a
}
