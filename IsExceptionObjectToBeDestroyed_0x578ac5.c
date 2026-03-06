// 函数名称: __IsExceptionObjectToBeDestroyed
// 虚拟地址: 0x578ac5
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t__IsExceptionObjectToBeDestroyed(int32_t arg1)
{
    // 第一条实际指令: int32_t* i = *(sub_57a0a4() + 0x24)
    for (int32_t* i = *(sub_57a0a4() + 0x24); i != 0; i = i[1])
        if (*i == arg1)
            return 0
    
    return 1
}
