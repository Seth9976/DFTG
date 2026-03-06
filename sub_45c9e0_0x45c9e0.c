// 函数名称: sub_45c9e0
// 虚拟地址: 0x45c9e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

voidsub_45c9e0(int32_t arg1)
{
    // 第一条实际指令: HANDLE esi = *((arg1 << 3) + &data_a755f4)
    HANDLE esi = *((arg1 << 3) + &data_a755f4)
    
    if (esi == 0)
        return 
    
    WaitForSingleObject(esi, 0xffffffff)
    CloseHandle(esi)
    *((arg1 << 3) + &data_a755f4) = 0
}
