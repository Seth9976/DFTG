// 函数名称: sub_526470
// 虚拟地址: 0x526470
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __fastcallsub_526470(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_4 = arg1
    int32_t* var_4 = arg1
    
    if (arg1[1] == 0)
        return 
    
    sub_526410(arg1)
    int32_t var_10_1 = *arg1
    uint32_t eax = _fwrite(0x5f49b4, 1, 2)
    
    if (eax != 2)
    label_5264d8:
        sub_489550(eax, &data_5b2591, "resultCount == len", "d:\ax\trunk\ax2017\engine\xmlwriter.cpp", 
            0x29, "sXmlEmit")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t esi_1 = 0
    
    if (arg1[2] s<= 0)
        return 
    
    while (true)
        int32_t var_10_2 = *arg1
        eax = _fwrite(0x6081a4, 1, 2)
        
        if (eax != 2)
            break
        
        esi_1 += 1
        
        if (esi_1 s>= arg1[2])
            return 
    
    goto label_5264d8
}
