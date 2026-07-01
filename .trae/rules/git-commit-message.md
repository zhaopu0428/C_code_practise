---
alwaysApply: true
scene: git_message
---

# Git 提交信息规范

本仓库为洛谷题解仓库，会持续提交新的题目代码。每次提交应遵循以下规范。

## 格式

```
<type>(<scope>): <description>

[optional body]
```

## Type 说明

- `feat`: 添加新题解（最常用，持续提交新题目）
- `fix`: 修复题解中的错误
- `refactor`: 重构代码（不改变功能）
- `docs`: 更新文档或注释
- `chore`: 杂项更新（如配置文件）

## Scope 说明

使用题目编号作为 scope，例如：
- `P1047` - 普通题目
- `B2011` - B 类题目

## Description 说明

- 使用中文描述
- 简洁明了，不超过 50 字符
- 说明具体做了什么

## 示例

```
feat(P1047): 添加树的计数题解
```

```
fix(P5739): 修正阶乘计算溢出问题
```

```
refactor(P1125): 优化代码结构
```

```
docs(P1603): 添加解题思路注释
```