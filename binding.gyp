{
  "targets": [{
    "target_name": "linear",
    "include_dirs" : [
      "<!(node -e \"require('nan')\")"
    ],
    "sources": [
      "src/linear.cc",
      "src/index.cc"
    ]
  }]
}