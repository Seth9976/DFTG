// 函数名称: sub_42af10
// 虚拟地址: 0x42af10
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_42af10(int32_t arg1)
{
    // 第一条实际指令: void* result = data_62bbe8
    void* result = data_62bbe8
    
    if (result != 0 && result != &data_5b2591)
        if (data_aca1f4 != 0 && *result != 0)
            result = sub_48a080(&data_62bbe8)
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                result = sub_4984f0(result, *(result + 0xc) + 0x10)
        
        data_62bbe8 = &data_5b2591
    
    data_62bbec = arg1
    data_62b248 = 0xa
    return result
}
