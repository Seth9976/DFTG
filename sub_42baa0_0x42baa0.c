// 函数名称: sub_42baa0
// 虚拟地址: 0x42baa0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_42baa0(int32_t arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_c = ecx
    int32_t result = sub_4ad220(sub_4b2440(arg1, sub_42a330), "tblAvatar", arg1, 0xffffffff)
    int32_t result_1 = result
    
    if (result_1 != 0)
        for (int32_t i = 0; i s< 0x10; i += 1)
            result = sub_4ad220(result, "tblAvatarItem", result_1, i)
            
            if (result != 0)
                sub_465a40(i + 0x64)
                int32_t var_1c_2 = 0xffffffff
                result = sub_4a8570(result)
    
    return result
}
