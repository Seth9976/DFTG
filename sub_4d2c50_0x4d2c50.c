// 函数名称: sub_4d2c50
// 虚拟地址: 0x4d2c50
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_4d2c50(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a0048
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void** arg_8
    void** edi = arg_8
    
    if (edi != 3 && edi != 4 && edi != 5 && edi != 6)
        sub_489550(&ExceptionList, &data_5b2591, 
            "textureType == TEXTURE_RENDER_TARGET || textureType == TEXTURE_DEPTH_STENCIL || textureType == "
        "TEXTURE_RENDER_TARGET_MSAA || textureType == TEXTURE_DEPTH_STENCIL_MSAA", 
            "d:\ax\trunk\ax2017\engine\texture.cpp", 0x3be, "TextureCreateForRendering")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int128_t* eax_4 = sub_4cf110(data_12bab00)
    int32_t* result
    
    if (arg5 == 0)
        result = sub_4d11f0(3, eax_4)
    else
        result = sub_4d1350(eax_4)
    
    int32_t* var_34_2 = &arg_8
    int32_t* var_1c
    sub_4889e0(&var_1c, result, 3)
    int32_t var_8_1 = 0
    int32_t* eax_5 = sub_586f5f(0x50, 0x10)
    
    if (eax_5 == 0)
        sub_489550(eax_5, &data_5b2591, "pBuffer", "d:\ax\trunk\ax2017\engine\xmemory.cpp", 0x57, 
            "XMalloc")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    sub_4ce680(eax_5, data_12baafc)
    *eax_5 = arg3
    eax_5[1] = arg2
    eax_5[6] = arg4
    void** eax_9 = arg_8
    eax_5[5] = 8
    eax_5[7] = edi
    eax_5[4] = 1
    eax_5[0xf] = 0
    eax_5[0x12] = 0
    
    if (*eax_9 != 0)
        sub_489550(eax_9, &data_5b2591, "pDefTexture->pTextureImportData == NULL", 
            "d:\ax\trunk\ax2017\engine\texture.cpp", 0x3db, "TextureCreateForRendering")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    *eax_9 = eax_5
    int32_t* eax_10 = var_1c
    
    if (eax_10 != 0)
        eax_10[7] -= 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
