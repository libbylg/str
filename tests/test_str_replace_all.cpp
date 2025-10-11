/**
 * Copyright (c) 2021-2025  libbylg@126.com
 * wizstr is licensed under Mulan PSL v2.
 * You can use this software according to the terms and conditions of the Mulan PSL v2.
 * You may obtain a copy of Mulan PSL v2 at:
 *          http://license.coscl.org.cn/MulanPSL2
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT, MERCHANTABILITY OR
 * FIT FOR A PARTICULAR PURPOSE.
 * See the Mulan PSL v2 for more details.
 */
#include "testing.hpp"

#include "str.hpp"

#include "test-utils.hpp"

#if defined(WIZSTR_NAMESPACE)
using str = WIZSTR_NAMESPACE::str;
#endif

TEST(test_str, replace_all) {
    SECTION("sample") {
        ASSERT_EQ(str::replace_all("abc-def-ghi", "abc", "xxx"), "xxx-def-ghi");
        ASSERT_EQ(str::replace_all("abc-def-ghi", "def", "xxx"), "abc-xxx-ghi");
        ASSERT_EQ(str::replace_all("abc-def-ghi", "ghi", "xxx"), "abc-def-xxx");
        ASSERT_EQ(str::replace_all("ababababab", "abab", "xy"), "xyxyab");
        ASSERT_EQ(str::replace_all("bababababa", "abab", "xy"), "bxyxya");
        ASSERT_EQ(str::replace_all("bababababa", "abab", ""), "ba");
        ASSERT_EQ(str::replace_all("xxx", "", "xyz"), "xxx");
        ASSERT_EQ(str::replace_all("", "xxx", ""), "");
        ASSERT_EQ(str::replace_all("", "", "xyz"), "");
        ASSERT_EQ(str::replace_all("", "", ""), "");
        ASSERT_EQ(str::replace_all("abc-def-ghi", "xxx", ""), "abc-def-ghi");
    }
}