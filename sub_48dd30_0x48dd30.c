// 函数名称: sub_48dd30
// 虚拟地址: 0x48dd30
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_48dd30(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: data_63b8a0 = arg2
    data_63b8a0 = arg2
    int32_t i = 1
    data_63c260 = 1
    int32_t result
    
    do
        int32_t eax_1 = (&data_63b89c)[i]
        result = (eax_1 u>> 0x1e ^ eax_1) * 0x6c078965 + i
        (&data_63b8a0)[i] = result
        i = data_63c260 + 1
        data_63c260 = i
    while (i u< 0x270)
    
    return result
}
