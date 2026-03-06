// 函数名称: sub_4818d0
// 虚拟地址: 0x4818d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_4818d0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    
    if (arg2 s> 0)
        do
            if (*(arg3 + (result << 2)) == arg4)
                if (result != 0xffffffff)
                    return result
                
                break
            
            result += 1
        while (result s< arg2)
    
    sub_489550(result, &data_5b2591, "idx != -1", "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 
        0x75b6, "ArrayGetIndex")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
