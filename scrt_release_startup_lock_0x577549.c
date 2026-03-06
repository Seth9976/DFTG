// 函数名称: ___scrt_release_startup_lock
// 虚拟地址: 0x577549
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t___scrt_release_startup_lock(char arg1)
{
    // 第一条实际指令: int32_t eax = ___asan_report_present()
    int32_t eax = ___asan_report_present()
    
    if (eax == 0 || arg1 != 0)
        return eax
    
    int32_t temp0_1 = data_6cf31c
    data_6cf31c = 0
    return temp0_1
}
