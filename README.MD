# libft

42 Common Core の最初の課題。C標準ライブラリの一部関数を自前で再実装した静的ライブラリです。

## 実装内容

- **Part 1**: `libc` の基本関数群（`ft_strlen`, `ft_memcpy`, `ft_isalpha` など、文字列・メモリ操作）
- **Part 2**: 追加のユーティリティ関数（`ft_itoa`, `ft_split`, `ft_atoi` など）
- **Bonus**: 連結リスト操作関数（`ft_lstnew`, `ft_lstadd_back`, `ft_lstmap` など）
- 発展課題として `ft_printf`（フォーマット指定子ごとに変換処理を分割実装）、`get_next_line`（1行ずつファイルを読み込むバッファ管理）も同梱

これらは後続課題（`pipex` 等）から `libft.h` / `ft_printf.h` として再利用しています。

## Build

```sh
make
```

`libft.a` が生成されます。他プロジェクトから利用する場合は `-Ilibft -Llibft -lft` でリンクしてください。

## 技術ポイント

- 標準ライブラリの挙動をmanページレベルで再現しつつ、NULLポインタやエッジケース（空文字列・境界値）を自前でハンドリング
- `Wall -Wextra -Werror` 準拠、norm（42のコーディング規約）に沿った実装
