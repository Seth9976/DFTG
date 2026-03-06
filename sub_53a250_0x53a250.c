// 函数名称: sub_53a250
// 虚拟地址: 0x53a250
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __thiscallsub_53a250(void* arg1, uint32_t arg2)
{
    // 第一条实际指令: uint32_t result = arg2
    uint32_t result = arg2
    
    if (result != 0)
        uint32_t ecx = zx.d(result.w)
        
        if (ecx u< *(arg1 + 0x3c))
            int32_t* esi_2 = ecx * 0x24c + *(arg1 + 0x38)
            
            if (esi_2[0x92] == result)
                if (*esi_2 != 0)
                    sub_489550(result, &data_5b2591, "bufferData->mBufferType == DX11BUFFER_VERTEX", 
                        "d:\ax\trunk\ax2017\engine\windows\windowsdx11.cpp", 0x1c7, 
                        "Dx11GraphicsInterface::ReleaseVertexBuffer")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                int32_t* eax = esi_2[6]
                (*(*eax + 8))(eax)
                result = zx.d(esi_2[0x92].w)
                int32_t ecx_2 = *(arg1 + 0x44)
                *(arg1 + 0x44) = result
                esi_2[0x92] = ecx_2
                *(arg1 + 0x48) -= 1
    
    return result
}
