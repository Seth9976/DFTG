// 函数名称: sub_454290
// 虚拟地址: 0x454290
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_454290(int32_t arg1)
{
    // 第一条实际指令: int32_t var_4 = arg1
    int32_t var_4 = arg1
    void* result
    int32_t edx_1
    
    if (data_62b1ac == 0x21)
        edx_1 = data_62b1b0
    label_4542b1:
        
        if (edx_1 != 0)
            result = sub_426ed0(&(&data_15129e4)[arg1 * 9], edx_1, "tbl_opponents", arg1 - 1)
            
            if (result != 0 && sub_4bbf60(result).b != 0)
                result.b = 1
                return result
    else if (data_62b1bc == 0x21)
        edx_1 = data_62b1c0
        goto label_4542b1
    result.b = 0
    return result
}
