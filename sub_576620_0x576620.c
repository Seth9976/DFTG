// 函数名称: sub_576620
// 虚拟地址: 0x576620
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_576620(int32_t* arg1)
{
    // 第一条实际指令: void* ecx = arg1[4]
    void* ecx = arg1[4]
    
    if (ecx != 0)
        int32_t eax_2 = *(*(ecx + 8) + 8)
        
        if (eax_2 != 0)
            eax_2(ecx, arg1)
    
    _free(arg1[2])
    _free(*arg1)
    return _free(arg1)
}
