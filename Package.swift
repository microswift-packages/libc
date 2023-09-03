// swift-tools-version:5.1

import PackageDescription

let package = Package(
    name: "libc",
    products: [
        .library(
            name: "libc",
            targets: ["libc"]),
    ],
    targets: [
        .target(
            name: "libc",
            path: "microswift",
            sources: ["main.swift"]),
    ]
)