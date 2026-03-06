// 函数名称: sub_539dc0
// 虚拟地址: 0x539dc0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __thiscallsub_539dc0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* eax = sub_53e610(arg1 + 0x38, arg2)
    int32_t* eax = sub_53e610(arg1 + 0x38, arg2)
    int32_t* esi = eax
    int32_t var_20
    char* ecx_1
    
    if (*esi != 0)
        char const* const var_1c_1 = "Dx11GraphicsInterface::LockAppendVertexBuffer"
        var_20 = 0x12e
        ecx_1 = "bufferData->mBufferType == DX11BUFFER_VERTEX"
    else if (esi[1].b != 0)
        int32_t* eax_1 = *(arg1 + 8)
        int32_t var_8_1 = 0
        int64_t var_10 = 0
        eax = (*(*eax_1 + 0x38))(eax_1, esi[6], 0, 5, 0, &var_10)
        
        if (eax s>= 0)
            return esi[3] + var_10.d
        
        char const* const var_1c_4 = "Dx11GraphicsInterface::LockAppendVertexBuffer"
        var_20 = 0x133
        ecx_1 = "SUCCEEDED(hr)"
    else
        char const* const var_1c_2 = "Dx11GraphicsInterface::LockAppendVertexBuffer"
        var_20 = 0x12f
        ecx_1 = "bufferData->mDynamic"
    
    sub_489550(eax, &data_5b2591, ecx_1, "d:\ax\trunk\ax2017\engine\windows\windowsdx11.cpp", var_20, 
        "Dx11GraphicsInterface::LockAppendVertexBuffer")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
