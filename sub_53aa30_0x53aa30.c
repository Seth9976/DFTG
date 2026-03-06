// 函数名称: sub_53aa30
// 虚拟地址: 0x53aa30
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __thiscallsub_53aa30(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* eax = sub_53e610(arg1 + 0x38, arg2)
    int32_t* eax = sub_53e610(arg1 + 0x38, arg2)
    
    if (*eax == 2)
        int32_t* eax_1 = *(arg1 + 8)
        return (*(*eax_1 + 0xd8))(eax_1, eax[8])
    
    sub_489550(eax, &data_5b2591, "bufferData->mBufferType == DX11BUFFER_TEXTURE", 
        "d:\ax\trunk\ax2017\engine\windows\windowsdx11.cpp", 0x301, 
        "Dx11GraphicsInterface::TextureBufferCreateMipmaps")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
