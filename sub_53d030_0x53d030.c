// 函数名称: sub_53d030
// 虚拟地址: 0x53d030
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __thiscallsub_53d030(char* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    
    if (arg2 == 1)
        int32_t* eax_1 = *(arg1 + 0xc)
        int32_t result
        int32_t edx_1
        result, edx_1 = (*(*eax_1 + 0x20))(eax_1, 0, 0)
        
        if (result == 0x887a0005 || result == 0x887a0007)
            sub_53bf70(result, edx_1, arg1, result)
            noreturn
        
        if (result s>= 0)
            return result
        
        int32_t result_1 = result
        sub_489550(sub_4894d0("DX11 Error: %x\n"), &data_5b2591, "Halt", 
            "d:\ax\trunk\ax2017\engine\windows\windowsdx11.cpp", 0xe9, "Dx11CheckHResult")
    else
        sub_489550(eax, &data_5b2591, "monitor == MONITOR_MAIN", 
            "d:\ax\trunk\ax2017\engine\windows\windowsdx11.cpp", 0x866, 
            "Dx11GraphicsInterface::APIPresent")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
