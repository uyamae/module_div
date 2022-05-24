モジュールの粒度のテスト
============================

依存関係
------------

```mermaid
graph TD
  subgraph mylib
  math
  random
  end
  subgraph app
  main
  sub
  other
  end
  sub -.-> math
  sub -.-> random
  other -.-> random
  main -.-> math
  main -.-> sub
  main -.-> other
```
