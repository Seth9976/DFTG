// 函数名称: sub_526410
// 虚拟地址: 0x526410
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __fastcallsub_526410(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[1] != 1)
    if (arg1[1] != 1)
        return 
    
    int32_t var_8_1 = *arg1
    uint32_t eax = _fwrite(0x6081a0, 1, 1)
    
    if (eax != 1)
        sub_489550(eax, &data_5b2591, "resultCount == len", "d:\ax\trunk\ax2017\engine\xmlwriter.cpp", 
            0x29, "sXmlEmit")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    arg1[1] = 3
}
